#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (!ht || ht->array == NULL || strlen(key) == 0 || !key || ht->size == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}