#include "lists.h"

/**
 * free_dlistint2 - frees a linked list
 * @head: pointer to the dlistint_t list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
