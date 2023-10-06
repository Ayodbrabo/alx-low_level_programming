#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array and initialize to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
