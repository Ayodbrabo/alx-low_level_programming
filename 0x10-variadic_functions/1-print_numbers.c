#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: is the string to be printed between numbers
* @n: is the number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int num;
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
