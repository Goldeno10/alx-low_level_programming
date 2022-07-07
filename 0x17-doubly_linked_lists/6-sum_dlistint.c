#include "lists.h"
/**
*sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
*@head: list head pointer
*Return: list sum
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
