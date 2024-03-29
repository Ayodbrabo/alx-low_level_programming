#include "3-calc.h"
#include <stddef.h>
/**
* get_op_func - selects the correct function to perform the operation
* @s: The operator passed as an argument to the program
* Return: A pointer to the corresponding function
*/
int (*get_op_func(char *s))(int, int)
{
int i;

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (ops[i].op)
{
if (*ops[i].op == *s && !s[1])
return (ops[i].f);
i++;
}
return (NULL);
}
