#include "lists.h"

/**
 * add_nodeint - adds a new node to a listint_t
 * @head: pointer to listint_t
 * @n: input for n in listint_t
 *
 * Return: address of new element, NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (head == NULL)
		return (NULL);

	temp->next = *head;

	*head = temp;

	return (temp);
}
