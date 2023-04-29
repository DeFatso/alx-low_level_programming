#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * listint_len - function name
 *
 * @h: parameter
 *
 * Return: returns number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}

	return (num);
}
