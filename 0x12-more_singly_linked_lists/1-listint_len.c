#include "lists.h"

/**
 * listint_len - finds length of listint_t
 * @h: pointer to head of listint_t
 *
 * Return: length of listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t listcount;

	if (h == NULL)
		return (0);

	for (listcount = 0; h != NULL; listcount++)
		h = h->next;

	return (listcount);
}
