#include "hash_tables.h"

/**
 * make_node - creates a new node
 * @key: key to add
 * @value: value to pair
 *
 * Return: pointer to new node
 */

hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *newnode = malloc(sizeof(hash_node_t *));

	if (newnode == NULL)
		return (NULL);

	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode);
		return (NULL);
	}

	return (newnode);
}

/**
 * hash_table_set - adds an element to a hash table
 * @ht: table to add element to
 * @key: key of element to add
 * @value: value of element
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *k;
	unsigned char *ukey;
	hash_node_t *newnode;

	if (key[0] == '\0')
		return (0);

	newnode = make_node(key, value);

	k = strdup(key);
	ukey = (unsigned char *)k;
	index = key_index(ukey, ht->size);

	free(k);

	if (ht->array[index] == NULL)
		newnode->next = NULL;
	else
		newnode->next = ht->array[index];

	ht->array[index] = newnode;

	return (1);
}
