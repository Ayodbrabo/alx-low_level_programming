#include "main.h"
/**
 * print_numbers - function that print all numbers from 0 - 9
 * Return: returns nothing
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
