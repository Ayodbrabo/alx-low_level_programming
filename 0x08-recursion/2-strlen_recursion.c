#include "main.h"
/**
 * _strlen_recursion - is a function that returns the length of a string.
 * @s: The string for which the length is to be calculated
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
