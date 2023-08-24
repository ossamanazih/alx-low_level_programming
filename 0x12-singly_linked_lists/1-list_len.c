#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements of a linked list
* @printed : pointer to the list_t list
*
* Return: number of elements in h
*/
size_t list_len(const list_t *printed)
{
size_t num = 0;

while (printed)
{
num++;
printed = printed->next;
}
return (num);
}
