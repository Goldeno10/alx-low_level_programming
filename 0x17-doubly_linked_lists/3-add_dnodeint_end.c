#include "lists.h"
/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list.
*@head: Pointer to head of list
*@n: List node data
*Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (current)
	{
		while (current)
		{
			new->prev = current;
			current = current->next;
		}
	}
	current = new;
	return (new);
}
