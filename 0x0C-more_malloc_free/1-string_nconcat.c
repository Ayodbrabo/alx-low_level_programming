#include <stdio.h>
#include <stdlib.h>
/**
 * _strlength - Calculate the length of a string.
 * @str: The input string.
 * Return: The length of the string.
 */
unsigned int _strlength(char *str)
{
	unsigned int length = 0;

	while (str[length])
		length++;
	return (length);
}
/**
 * string_nconcat - Concatenate two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *result, *concat;

	len1 = len2 = 0;
	while (s1 == NULL)
	{
		s1 = "";
	}
	while (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlength(s1);
	len2 = _strlength(s2);
	if (n >= len2)
	{
		n = len2;
	}
	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	concat = result;
	while (*s1)
	{
		*concat++ = *s1++;
	}
	while (n > 0)
	{
		*concat++ = *s2++;
		n--;
	}
	*concat = '\0';
	return (result);
}
