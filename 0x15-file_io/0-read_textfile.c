#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - Function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to the file to be readed
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, lenr, lenw;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(size_t) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	lenr = read(fd, buf, letters);
	if (lenr == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buf, lenr);
	if (lenw == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	if (lenw != lenr)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (lenw);
}
