#include "main.h"
/**
 * _puts - is a function that prints a string, followed by a new line
 * @str: is a string
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
