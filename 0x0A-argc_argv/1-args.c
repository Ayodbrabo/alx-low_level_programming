#include <stdio.h>
/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: number of argument
 * @argv: a string array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num = argc - 1;

	(void)argv;
	printf("%d\n", num);
	return (0);
}
