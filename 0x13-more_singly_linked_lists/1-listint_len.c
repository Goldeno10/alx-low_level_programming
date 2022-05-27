#include "lists.h"
/**
*listint_len - Evaluate the number of linked list elements.
*@h: Pointer to linked list
*Return: the number of elements in a linked listint_t list.
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);

}

