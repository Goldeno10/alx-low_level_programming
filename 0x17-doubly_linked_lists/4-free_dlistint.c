#include "lists.h"
/**
*free_dlistint - frees a dlistint_t list.
*@ead: Head pointer to list to be freed
*Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *forward, *backward;
	dlistint_t *f_head, *b_head;

	f_head = head;
	b_head = head;

	if (head != NULL)
	{
		while (f_head != NULL)
		{
			forward = f_head;
			f_head = f_head->next;
			free(forward);
		}
		while (b_head->prev != NULL)
		{
			b_head = b_head->prev;
			backward = b_head;
			b_head = b_head->prev;
			free(backward);
		}
	}
}
