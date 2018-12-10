#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a dlistint
 * @head: pointer to first element
 *
 * Return: sum of all elements, or 0 on empty list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
