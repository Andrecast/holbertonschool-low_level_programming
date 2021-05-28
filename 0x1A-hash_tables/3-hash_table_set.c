#include "hash_tables.h"
/**
 * hash_table_set - function that adds or update an element to the hash table.
 * @ht:  hash table to add or update the key/value to
 * @key: the string key of the hash table
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int status = 0;
	hash_node_t *new_node_hash = NULL;

	if (key == NULL || ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	status = update(ht->array[index], key, value);
	if (status == 0 || status == 1)
		return (status);
	/*For create a node... */
	new_node_hash = calloc(1, sizeof(hash_node_t));
	if (new_node_hash == NULL)
		return (0);

	/*inicialization*/
	new_node_hash->key = strdup(key);
	if (new_node_hash->key == NULL)
	{
		free(new_node_hash);
		return (0);
	}
	new_node_hash->value = strdup(value);
	if (new_node_hash->key == NULL)
	{
		free(new_node_hash->key);
		free(new_node_hash);
		return (0);
	}

	/*Enlazar el array con la linked list*/
	new_node_hash->next = ht->array[index];
	ht->array[index] = new_node_hash;
	return (1);
}

/**
 * update - function that update an element to the hash table.
 * @array_index:  hash table member in index
 * @key: the string key of the hash table
 * @value: is the value associated with the key.
 * Return: 1 if it find the kay, 0 otherwise, 2 if not find the key
 **/

int update(hash_node_t *array_index, const char *key, const char *value)
{
	hash_node_t *tmp = array_index;

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	return (2);
}
