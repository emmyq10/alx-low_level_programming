#include "lists.h"

/**
 * free_dlistint - dlistint_t list is free.
 * @head: this pointer to the head of the list
 * Return: this return nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
