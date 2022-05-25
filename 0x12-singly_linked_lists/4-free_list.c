#include "lists.h"
/**
*
*
*
*/
void free_list(list_t *head)
{
	if (head == NULL)
	 return;

	while (head->next != NULL)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
