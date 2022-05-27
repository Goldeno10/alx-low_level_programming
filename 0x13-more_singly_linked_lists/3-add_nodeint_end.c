#include "lists.h"
/**
*add_nodeint_end - adds a new node at the end of a listint_t list.
*@head: Head pointer
*@n: List Data
*Return:the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	last = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
