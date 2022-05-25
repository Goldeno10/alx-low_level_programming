#include "lists.h"
/**
*add_node_end - adds a new node at the end of a list_t list.
*@head: Pointer to first lust element
*@str: string data
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;
	list_t *last = *head;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = len;
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
