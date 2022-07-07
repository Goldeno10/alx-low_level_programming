#include "lists.h"
/**
*insert_dnodeint_at_index - inserts a node and a given index
*@h: list head pointer
*@index: node index
*Return: Address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;
	current = *h;

	new = malloc(sizeof(dlistint_t *));
	if (!new)
		return (NULL);
	if (!current && idx != 0)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new  = add_dnodeint(h, idx);
		return (new);
	}

	if (current)
	{
		while (current->prev)
			current = current->prev;
	}
	if (current)
	{
		while (current->next)
		{
			if (i == idx)
				break;
			current = current->next;
			i++;
		}
	}
	if (!current->next && i == idx)
	{
		new = add_dnodeint_end(h, idx);
		return (new);
	}
	if (current && (i == idx))
	{
		current->prev = new;
		if (current->prev)
			current->prev->next = new;
		new->next = current;
		new->prev = current->prev;
		return (new);
	}
	return (NULL);
}
