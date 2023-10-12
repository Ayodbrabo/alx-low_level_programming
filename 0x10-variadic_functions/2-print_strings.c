#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - a function that prints strings, followed by a new line.
* @separator:  is the string to be printed between the strings
* @n: is the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
