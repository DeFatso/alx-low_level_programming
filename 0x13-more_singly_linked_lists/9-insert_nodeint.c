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
	listint_t *new_node, *prev_node, *curr_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	prev_node = NULL;
	curr_node = *head;

	for (i = 0; i < idx && curr_node != NULL; i++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	if (i != idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = curr_node;
	prev_node->next = new_node;

	return (new_node);
}

