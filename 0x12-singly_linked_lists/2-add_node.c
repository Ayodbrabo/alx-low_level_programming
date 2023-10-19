#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* _strlen - Calculate the length of a string.
* @str: The input string.
* Return: The length of the string.
*/
unsigned int _strlen(const char *str)
{
unsigned int len = 0;
while (str[len])
len++;
return (len);
}

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: A pointer to a pointer to the head of the list.
* @str: The string to be added to the new node.
* Return: The address of the new element, or NULL if it fails.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
