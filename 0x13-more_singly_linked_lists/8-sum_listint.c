#include "lists.h"
/**
 * sum_listint - Sum all of the data (n) in a list.
 * @head: head pointer
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
