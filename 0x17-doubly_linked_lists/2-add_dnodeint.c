#include "lists.h"
/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t list.
 * @head: parameter
 * @n: parameter
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
