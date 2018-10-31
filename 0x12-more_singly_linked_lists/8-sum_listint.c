#include "lists.h"

/**
 * sum_listint - sums all n values in listint_t
 * @head: first node in listint
 *
 * Return: sum of all n values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
