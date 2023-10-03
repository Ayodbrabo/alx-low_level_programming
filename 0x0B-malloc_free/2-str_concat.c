#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: is a string
 * @s2: is a string
 * Return: returns NULL or a string of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, a, len1, len2;
	char *concated;

	i = a = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[a] != '\0')
	{
		a++;
	}
	concated = malloc((a + i + 1) * sizeof(char));
	if (concated == NULL)
	{
		return (NULL);
	}
	for (len1 = 0; len1 < i; len1++)
	{
		concated[len1] = s1[len1];
	}
	for (len2 = 0; len2 < a; len2++)
	{
		concated[i + len2] = s2[len2];
	}
	concated[i + a] = '\0';
	return (concated);
}
