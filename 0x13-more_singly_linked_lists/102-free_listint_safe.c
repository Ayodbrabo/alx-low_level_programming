#include <stdlib.h>
#include "lists.h"
/**
* free_listint_safe - Safely frees a listint_t linked list.
* @h: A pointer to a pointer to the head of the list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h, *next;
size_t size = 0;

while (current != NULL)
{
size++;
next = current->next;
free(current);
current = next;

if (current == *h)
{
*h = NULL;
break;
}
}

*h = NULL;
return (size);
}
