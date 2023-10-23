#include "lists.h"
/**
* get_nodeint_at_index - Returns the nth node of a listint_t list.
* @head: A pointer to the head of the list.
* @index: The index of the node to retrieve (starting from 0).
* Return: The node at the specified index, or NULL if it doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}

return (NULL);
}
