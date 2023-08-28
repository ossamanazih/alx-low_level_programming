#include <stdlib.h>
#include <stdio.h>
#include "lists.h"



/**
* sum_listint - return the sum of the elements
* @head: pointer to the first element
* Return: the sum
*/

int sum_listint(listint_t *head)
{

int somme = 0;
	listint_t *temp = head;

	while (temp)
	{
		somme += temp->n;
		temp = temp->next;
	}

	return (somme);
}
