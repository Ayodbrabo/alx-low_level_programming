#include "main.h"
/**
 * _strncpy - is a function that copies a string
 * @dest: is a char string
 * @src: is a char string
 * @n: is an integer
 * Return: return the copied src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
