#include "lists.h"

/**
*sum_dlistint - sum of all  dlistint_t linked list data.
*@head: list head pointer
*Return: The list sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (!head)
		return (0);
	if (head)
	{
		while (head->prev)
			head = head->prev;
	}
	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
