#include <stdio.h>
#include "lists.h"
/**
*print_list - prints all the elements of a list_t list.
*@a: A linked list node pointer
*Return: Unsigned Integer
*/

size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		(h->str) ? printf("%s", h->str) : printf("[0] (nill)");
		h = h->next
	)
	return (o);
}
