#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
	int child_pid, wait_pid, status;

	child_pid = fork();
	if(child_pid == 0)// child process
    {
		if(execve(argv[0], argv, NULL) < 0)
		{ // Failed to run the command
			printf("*** Failed to exec %s\n", argv[0]);
      		exit(1);
    	}
		execve(argv[0], argv, NULL);
		printf("ERROR\n");
        exit(1);
	}else // parent process 
    {
		wait_pid = wait(NULL);
		printf("%d %d", getpid(), wait_pid);
	}
}
q