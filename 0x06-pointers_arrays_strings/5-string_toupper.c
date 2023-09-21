#include "main.h"
/**
 * string_toupper -  function that changes all lowercase letter
 * of a string to uppercase.
 *@str: cadena de caracteres.
 * Return: returns is needed.
 */
char *string_toupper(char *str)
{
	char *n = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (n);
}
