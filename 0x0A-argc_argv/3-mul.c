#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: is the number of arguments
 * @argv: is the array of strings with arguments
 * Return: Always 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, times;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	times = 1;
	for (i = 1; i < argc; i++)
	{
		times *= atoi(argv[i]);
		if (i == 2)
		{
			printf("%d\n", times);
		}
	}
	return (0);
}
