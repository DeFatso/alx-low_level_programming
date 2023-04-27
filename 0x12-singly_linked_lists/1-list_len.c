#include "lists.h"
/**
 * list_len - returns lengt
 *
 * @h: parameter
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
