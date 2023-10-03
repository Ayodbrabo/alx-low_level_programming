#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: is an interger
 * @c: is a character
 * Return: returns NULL or an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
