#include "lists.h"

/**
 * free_dlistint - frees a dlistint
 * @head: pointer to first element of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
