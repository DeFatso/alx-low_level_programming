#include "lists.h"
/**
 * free_listint2 - frees memmory
 * @head: parameter
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head == NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
