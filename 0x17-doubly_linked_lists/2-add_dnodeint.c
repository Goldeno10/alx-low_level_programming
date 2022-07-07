#include "lists.h"
/**
*add_dnodeint - adds a new node at the beginning of a dlistint_t list.
*@head:Pointer to a pointer to a start of a list
*@n: Node integer data
*Return: The address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	current = *head;
	new = malloc(sizeof(dlistint_t *));
	if (!new || !current)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (current)
	{
		while (current->prev)
			current = current->prev;
		new->prev = current->prev;
		new->next = current;
		current->prev = new;
		current = new;
	}
	return (new);
}
