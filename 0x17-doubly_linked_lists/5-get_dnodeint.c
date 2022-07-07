#include "lists.h"
/**
*
*
*
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *node;

	node = head;
	if (!node)
		return (NULL);
	while (node && !(n > index))
	{
		node = node->next;
		n++;
	}
	return (node);
}
