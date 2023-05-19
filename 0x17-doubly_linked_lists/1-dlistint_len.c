#include "lists.h"

/**
 * dlistint - prints all the elements of a linked list
 * @h: linked list of type dlistint_t to print
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
