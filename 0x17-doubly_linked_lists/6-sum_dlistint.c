#include "lists.h"
/**
*sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
*@head: list head pointer
*Return: list sum
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int n = 0;

	while (node)
	{
		node = node->next;
		n++;
	}
	return (n);
}
