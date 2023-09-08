#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

/* betty style doc for function main goes there */
int main(void)
{
	char c;
	char b;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);

}
