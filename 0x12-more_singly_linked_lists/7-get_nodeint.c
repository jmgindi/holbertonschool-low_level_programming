#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at the index
 * @head: head of listint_t
 * @index: position to search to
 *
 * Return: pointer to node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		else if (head->next == NULL)
			break;

		head = head->next;
	}

	return (head);
}
