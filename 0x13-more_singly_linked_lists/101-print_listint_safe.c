#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint_safe - Safely prints a listint_t linked list.
* @head: A pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head;
size_t count = 0;

while (slow != NULL && fast != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next;
count++;

if (fast != NULL)
{
fast = fast->next;
count++;
}

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}

return (count);
}
