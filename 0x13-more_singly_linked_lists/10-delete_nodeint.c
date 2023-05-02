#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index;
 * @head: parameter
 * @index: parameter
 * Return: returns 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node, *prev_node;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}

	prev_node = NULL;
	curr_node = *head;

	for (i = 0; i < index && curr_node != NULL; i++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}
	if (curr_node == NULL)
	{
		return (-1);
	}

	prev_node->next = curr_node->next;
	free(curr_node);

	return (1);
}
