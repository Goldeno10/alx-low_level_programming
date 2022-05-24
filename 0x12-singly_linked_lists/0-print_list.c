#include <stdio.h>
#include "lists.h"
/**
*print_list - prints all the elements of a list_t list.
*@a: A linked list node pointer
*Return: Unsigned Integer
*/

size_t print_list(const list_t *h)
{
	int num_of_node = 0;

	while (h != NULL)
	{
		(h->str) ? printf("[%u]%s\n",h->len,  h->str) : printf("[0] (nill)\n");
		h = h->next;
		num_of_node++;
	}
	return (num_of_node);
}
