#include <stdlib.h>
#include <stdio.h>
#include "lists.h"



/**
* pop_listint - deletes the head node
* @head: pointer to the first element
* Return: valuse of the lement deleted or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{

listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);

}
