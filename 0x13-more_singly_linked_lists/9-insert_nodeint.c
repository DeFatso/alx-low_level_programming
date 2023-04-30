#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at index
 *
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *previous_node, *current_node;
	unsigned int i;

	if (head == NULL || idx == 0)
	{
		return (add_nodeint(head, n));
	}

	previous_node = NULL;
	current_node = *head;

	for (i = 0; i < idx && current_node != NULL; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}

	if (i < idx)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current_node;

	if (previous_node != NULL)
	{
		previous_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
