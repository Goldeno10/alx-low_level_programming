#include "lists.h"
/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
*@head: list head pointer
*@index: node index
*Return: Node at index "index"
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *node;

	node = head;
	if (!node)
		return (NULL);
	if (node)
	{
		while (node->prev)
			node = node->prev;
	}
	if (node)
	{
		while (node->next)
		{
			node = node->next;
			if (n == index)
				break;
			n++;
		}
	}
	return (node);
}
