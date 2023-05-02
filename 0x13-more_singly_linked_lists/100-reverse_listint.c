#include "lists.h"
/**
 * reverse_listint - reverses the order of the nodes in the list
 * @head: parameter
 * Return: new node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *curr_node = *head;
	listint_t *next_node;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		curr_node->next = prev_node;
		prev_node = curr_node;
		curr_node = next_node;
	}
	*head = prev_node;

	return (prev_node);
}
