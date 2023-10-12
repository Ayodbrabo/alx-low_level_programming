#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - a function that prints anything.
* @format:  is a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
va_list args;
char *str, *separator = "";
const char *current_format = format;

va_start(args, format);
while (current_format && *current_format)
{
switch (*current_format)
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, (float)va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
}
separator = ", ";
current_format++;
}
va_end(args);
printf("\n");
}
