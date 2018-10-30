#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: pointer to first element of list to free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
