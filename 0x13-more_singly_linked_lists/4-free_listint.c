#include "lists.h"
#include "stdlib.h"
#include <string.h>
/**
 * free_listint - frees memory
 * @head: parameter
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head == NULL)
	{
		current = head;
		head = head->next;
		free (current);
	}
}
