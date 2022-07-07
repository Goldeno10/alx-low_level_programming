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
	if (!new || !current)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = current;
		current->prev = new;
		return (new);
	}
	while (current != NULL && i > idx)
	{
		current = current->next;
		n++;
		if (!current && i != idx)
			return (NULL);
	}
	new->prev = current->prev;
	current->prev = new;
	new->next = current;
	current->prev->next = new;
	return (new);
}
