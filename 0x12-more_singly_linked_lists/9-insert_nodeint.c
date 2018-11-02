#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index idx
 * @head: pointer to list head
 * @idx: index to insert at
 * @n: value for n entry in listint
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newlint;
	unsigned int index;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	newlint = malloc(sizeof(listint_t));

	if (newlint == NULL)
	{
		free(newlint);
		return (NULL);
	}

	for (index = 0; temp != NULL && index < idx; index++)
		temp = temp->next;

	if (index == (idx - 1))
	{
		newlint->n = n;
		newlint->next = temp->next;
		temp->next = newlint;
		return (newlint);
	}

	return (NULL);
}
