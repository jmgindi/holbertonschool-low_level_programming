#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table in order
 * @ht: table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 1;
	hash_node_t *run;

	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		run = ht->array[i];
		while (run != NULL)
		{
			if (flag == 0)
				printf(", ");
			printf("\'%s\': \'%s\'", run->key, run->value);
			run = run->next;
			flag = 0;
		}
	}

	printf("}\n");
}
