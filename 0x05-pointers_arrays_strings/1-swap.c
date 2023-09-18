#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: a pointer to a variable to be swapped
 * @b: a pointer to a second swap variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
