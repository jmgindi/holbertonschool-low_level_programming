#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from a hash table
 * @ht: hash table to check
 * @key: key to find value of
 *
 * Return: value associated with key, or NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *search;
	char *k;
	const unsigned char *ukey;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (NULL);

	k = strdup(key);
	ukey = (unsigned char *)k;
	index = key_index(ukey, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	search = ht->array[index];
	while (search)
	{
		if (strcmp(search->key, k) == 0)
			return (search->value);
		search = search->next;
	}

	return (NULL);
}
