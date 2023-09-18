#include "main.h"
/**
 * puts_half - is a function that prints half of\n
 * a string, followed by a new line.
 * @str: is a string
 */
void puts_half(char *str)
{
	int i, y, len, start;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	for (y = start; y < len; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
