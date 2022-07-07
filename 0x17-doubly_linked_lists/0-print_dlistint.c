#include "lists.h"
/**
*print_dlistint - prints all the elements of a dlistint_t list.
*@h: Pointer to head node
*Return: Number ofnodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
