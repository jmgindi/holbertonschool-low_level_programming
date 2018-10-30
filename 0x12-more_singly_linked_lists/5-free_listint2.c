#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets head to NULL
 * @head: pointer to listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);

	head = NULL;
}
