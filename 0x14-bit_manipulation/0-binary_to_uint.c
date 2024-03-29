#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars.
* Return: The converted number, or 0 if
*there is an invalid character or b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;

if (b == NULL)
{
return (0);
}
while (*b)
{
if (*b != '0' && *b != '1')
{
return (0);
}
i = i * 2 + (*b - '0');
b++;
}
return (i);
}
