#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - print the name
* @name: is the name 
* @f: is a  pointer to function 
*/
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}
