#include <stdlib.h>
#include <stdio.h>
#include "lists.h"



/**
* get_nodeint_at_index - return the node at a specific index
* @head: pointer to the first element
* @index: index of the node to return
* Return: valuse of the element searched or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
