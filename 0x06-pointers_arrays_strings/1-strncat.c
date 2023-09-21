#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	len = i;
	while (src[j] != '\0' && n > 0)
	{
		dest[len] = src[j];
		len++;
		j++;
		n--;
	}
	dest[len] = '\0';
	return (dest);
}
