#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - Deletes the head node of a listint_t list and returns its data.
* @head: A pointer to a pointer to the head of the list.
* Return: The data (n) of the head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = temp->next;
free(temp);

return (data);
}
