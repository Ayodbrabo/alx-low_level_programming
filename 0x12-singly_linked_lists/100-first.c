#include <stdio.h>

void __attribute__((constructor)) print_before_main(void);

/**
 * print_before_main - function to print the lines before main
 */
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
