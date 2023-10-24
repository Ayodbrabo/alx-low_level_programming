#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
* print_listint_safe - Prints a listint_t linked list safely
* @head: A pointer to the head of the list
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count = 0;

while (head)
{
current = head;
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;

if (current <= head)
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
}

return (count);
}
