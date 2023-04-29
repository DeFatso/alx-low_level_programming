#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_listint - prints list
 *
 *@h : parameter
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
