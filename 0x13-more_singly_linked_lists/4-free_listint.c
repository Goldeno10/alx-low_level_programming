#include "lists.h"
/**
*free_listint - frees a listint_t list
*@head: Head pointer
*Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}

}
