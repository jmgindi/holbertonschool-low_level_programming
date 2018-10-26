#include "lists.h"

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
