#include "lists.h"
#include <stdio.h>
/**
* print_list - Prints all the elements of a list_t list.
* @h: A pointer to the head of the list.
* Return: The number of nodes in the list.
*/

size_t print_list(const list_t *h)
{
const list_t *ptr = h;
size_t count = 0;

while (ptr != NULL)
{
if (ptr->str != NULL)
printf("[%d] %s\n", ptr->len, ptr->str);
else
printf("[0] (nil)\n");
count++;
ptr = ptr->next;
}

return (count);
}
