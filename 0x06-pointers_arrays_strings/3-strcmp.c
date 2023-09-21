#include "main.h"
/**
 * _strcmp - Write a function that compares two strings.
 * @s1: is a char string
 * @s2: is a char string
 * Return: returns the result of _strcmp
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
