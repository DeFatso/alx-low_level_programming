#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: parameter
 *
 * Return: head node's data
 *
 */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	head_data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (head_data);
}
