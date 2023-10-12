#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
