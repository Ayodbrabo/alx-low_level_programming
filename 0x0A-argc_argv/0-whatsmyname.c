#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
