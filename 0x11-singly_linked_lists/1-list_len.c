#include "lists.h"

/**
 * list_len - prints the length of a list_t
 * @h: list_t input
 *
 * Return: node count
 */

size_t list_len(const list_t *h)
{
	size_t listcount = 0;

	while (h != NULL)
	{
		listcount++;
		h = h->next;
	}

	return (listcount);
}
