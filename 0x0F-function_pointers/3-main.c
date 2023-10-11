#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - the main funtion
* @argc: number of argument
* @argv: array
* Return: returns 0
*/
int main(int argc, char *argv[])
{
int num1, num2;
int (*func)(int, int);
char *operator;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];

func = get_op_func(operator);

if (func == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", func(num1, num2));
return (0);
}
