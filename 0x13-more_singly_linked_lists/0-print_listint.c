#include "lists.h"

/**
 * print_listint - print all element of a listint_t list
 *
 * @ head of link list node
 * Return: the number of node
 *
 */
size_t print_listint(const listint_t *h);
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (num);
}
