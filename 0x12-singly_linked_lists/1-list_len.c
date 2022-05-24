#include "lists.h"

/**
*list_len - print oebt of list
*@h: pointer a linked list
*Return: Size of linkend list
*/
size_t list_len(const list_t *h)
{
	size_t len;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
