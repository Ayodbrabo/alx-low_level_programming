#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space\n
 * in memory, which contains a copy of the string given as a parameter.
 * @str: is a string
 * Return: returns NULL or array
 */
char *_strdup(char *str)
{
	char *dup;

	unsigned int i, a;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc((i + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		dup[a] = str[a];
	}
	return (dup);
}
