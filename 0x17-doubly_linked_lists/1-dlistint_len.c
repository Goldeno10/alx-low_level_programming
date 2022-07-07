#include "lists.h"
/**
*dlistint_len - Evaluate the number of elements in a linked dlistint_t list.
*@h: Pointer to head node
*Return: Number of node
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	current = h;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
