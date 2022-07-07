#include "lists.h"
/**
*free_dlistint - frees a dlistint_t list.
*@head: Head pointer to list to be freed
*Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f_h;

	if (!head)
		return;
	if (head)
	{
		while (head->prev)
			head = head->prev;
	}
	f_h = head;
	while (head)
	{
		f_h = head;
		head = head->next;
		free(f_h);
	}
}
