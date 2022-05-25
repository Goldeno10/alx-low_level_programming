#include "lists.h"
/**
*free_list - Frees a
*@head: head point of a list
*Return:  Nothing
*/
void free_list(list_t *head)
{
	list_t *temp = NULL;

	if (head == NULL)
	 return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head)
		head = temp;

	}
}
