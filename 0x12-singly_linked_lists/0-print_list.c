#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list
* @printed: pointer to the list_t list to be printed
* Return: the number of nodes to be printed
*/
size_t print_list(const list_t *printed)
{
size_t size = 0;
while (printed)
{
if (!printed->str)
printf("[0] (nil) \n");
else
printf("[%u] %s\n", printed->len, printed->str);
printed = printed->next;
size++;
}

return (size);
}
