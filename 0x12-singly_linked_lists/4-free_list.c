#include "lists.h"
/**
*free_list - Frees a
*@head: head point of a list
*Return:  Nothing
*/
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;

	}
}
