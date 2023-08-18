#include "lists.h"

/**
 * get_dnodeint_at_index - the nth node of a dlistint_t linked list os return.
 * @head: this point to the head of the list
 * @index: indexing of node for search, starting from 0
 * Return: nth node or nothing
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
