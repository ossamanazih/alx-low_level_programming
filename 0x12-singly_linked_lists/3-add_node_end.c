#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the beginning of a Linked List
* @head: double pointer to the list_t list
* @str: new string to add in the node
* Return: the address of the new element, or NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *nouveau;
list_t *temp = *head;
unsigned int length = 0;

while (str[length])
length++;
nouveau = malloc(sizeof(list_t));
if (!nouveau)
return (NULL);

nouveau->str = strdup(str);
nouveau->len = length;
nouveau->next = NULL;

if (*head == NULL)
{
*head = nouveau;
return (nouveau);
}

while (temp->next)
temp = temp->next;

temp->next = nouveau;

return (nouveau);
}
