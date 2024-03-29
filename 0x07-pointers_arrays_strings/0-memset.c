#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to the memory area
 * @b: constant byte to fill with
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

