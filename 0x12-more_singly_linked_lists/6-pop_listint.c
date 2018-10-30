#include "lists.h"

/**
 * pop_listint - pops the head node off a listint_t and returns its n value
 * @head: head node pointer
 *
 * Return: n value of head popped off
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ntemp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	ntemp = *head->n;

	if (temp-> next != NULL)
		*head = temp->next;
	else
		*head = NULL;

	free(temp);
	return (ntemp);
}
