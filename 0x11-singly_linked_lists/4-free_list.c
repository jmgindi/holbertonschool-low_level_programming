#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer to first element to free
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
