#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the\n
 * substring needle in the string haystack
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 * Return: a pointer to the beginning of the located\n
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
