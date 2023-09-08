#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char b;
	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
