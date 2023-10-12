#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - a function that prints anything.
* @format:  is a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
char *str;
char *separator;
unsigned int i;
char current_format;
va_list args;

separator = "";
i = 0;
va_start(args, format);
while (format && format[i])
{
current_format = format[i];
switch (current_format)
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
str = va_arg(args, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s%s", separator, str);
}
break;
}
separator = ", ";
i++;
}
va_end(args);
printf("\n");
}
