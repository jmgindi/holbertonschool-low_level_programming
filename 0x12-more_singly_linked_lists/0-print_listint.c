#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints a listint_t
 * @h: pointer to head
 *
 * Return: number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	size_t listcount;

	if (h == NULL)
		return (0);

	for (listcount = 0; h != NULL; listcount++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}

	return (listcount);
}
