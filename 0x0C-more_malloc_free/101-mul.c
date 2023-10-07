#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * is_digit_string - checks for a digit
 * @str: is a character string
 * Return: returns 1 or 0
 */
int is_digit_string(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - a program that multiplies two positive numbers.
 * @argc: is an integer
 * @argv: is an string array
 * Return: returns 0 or 98
 */
int main(int argc, char *argv[])
{
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);
	result = num1 * num2;
	printf("%lu\n", result);
	return (0);
}
