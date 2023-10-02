#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array of string of arguments
 * Return: returns 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
