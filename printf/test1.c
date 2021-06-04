#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct
{
  char *s;
  int (*p)();
} form;

int print_c(va_list ar)
{
  int i = va_arg(ar, int);
  
  write(1, &i, 1);
  return(1);
}

int print_s(va_list ar)
{
  char *s = va_arg(ar, char *);
  int i;
  
  for (i = 0; s[i] != '\0'; i++)
    write(1, s + i, 1);
  return (i);
}

void percent(char format)
{
  form cases[] = {
    {"c", print_c},
    {"s", print_s},
    {NULL, NULL},
  };
  int a = 0, j;
  
  //while(format[] != NULL)
  //{
    j = 0;
    while (cases[j].s != NULL)
    {
      if (format == cases[j].s[0])
      {
        cases[j].p(format);
      }
      j++;
    }
    //a++;
  //}
}

int _printf(const char *format, ...)
{
  va_list ar;
  va_start(ar, format);
  
  int i = 0;
  while (format[i] != '\0')
  {
    if (format[i] == '%')
    {
      i++;
      int b = format[i];
      percent(format[i]);
    }
    write(1, format + i, 1);
    i++;
  }
  
  
  va_end(ar);
}

int main() {
  char *a = "World";
  
  _printf("Hell%c%s", 111, a);

  return 0;
}