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
	hash_node_t *newnode, *search;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key[0] == '\0')
		return (0);
	newnode = make_node(key, value);
	if (newnode == NULL)
		return (0);
	k = strdup(key);
	if (k == NULL)
	{
		free(newnode);
		return (0);
	}
	ukey = (unsigned char *)k;
	index = key_index(ukey, ht->size);
	free(k);
	search = ht->array[index];
	while (search)
	{
		if (strcmp(newnode->key, search->key) == 0)
		{
			free(search->value);
			search->value = strdup(value);
			free(newnode->key);
			free(newnode->value);
			free(newnode);
			return (1);
		}
		search = search->next;
	}
	if (ht->array[index] == NULL)
		newnode->next = NULL;
	else
		newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
