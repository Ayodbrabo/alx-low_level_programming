#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag, sum_diag2;

	sum_diag = sum_diag2 = 0;
	for (i = 0; i < size; i++)
	{
		sum_diag += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", sum_diag);
	printf("%d\n", sum_diag2);
}
