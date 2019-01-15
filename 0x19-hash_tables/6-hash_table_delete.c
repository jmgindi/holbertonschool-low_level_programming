#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nex, *cur;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (cur = ht->array[i]; cur != NULL; cur = nex)
		{
			nex = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
		}
	}

	free(ht->array);
	free(ht);
}
