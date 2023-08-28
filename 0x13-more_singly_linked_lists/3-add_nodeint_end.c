#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the beginning of a linked list
* @head: pointer to the last node in the list
* @n: data to insert in that new node
*
* Return: pointer to the new node, or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *nouveau;
listint_t *temp = *head;

nouveau = malloc(sizeof(listint_t));
if (!nouveau)
return (NULL);

nouveau->n = n;
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
