#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t
 * @h: list_t input
 *
 * Return: node count
 */

size_t print_list(const list_t *h)
{
	size_t listcount;

	if (h == NULL)
		return (0);

	for (listcount = 0; h != NULL; listcount++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (listcount);
}
