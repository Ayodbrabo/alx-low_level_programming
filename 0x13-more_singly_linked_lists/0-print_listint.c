#include <stdio.h>
#include "lists.h"
/**
* print_listint - Prints all elements of a listint_t list.
* @h: A pointer to the head of the list.
* Return: The number of nodes.
*/
size_t print_listint(const listint_t *h)
{
if (h == NULL)
return (0);

printf("%d\n", h->n);
return (1 + print_listint(h->next));
}
