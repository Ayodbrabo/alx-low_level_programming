#include "main.h"
/**
 * _strcat - is a function that concatenates two strings.
 * @dest: is a string
 * @src: is a string
 * Return: returns result of concat
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
