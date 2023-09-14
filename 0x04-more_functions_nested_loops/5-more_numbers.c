#include "main.h"
/**
 * more_numbers - prints numbers to 14
 * Return: returns nothing
 */
void more_numbers(void)
{
	int c, b;

	for (c = 0; c < 10; c++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
