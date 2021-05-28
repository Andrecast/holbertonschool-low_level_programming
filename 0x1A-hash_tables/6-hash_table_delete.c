#include "hash_tables.h"

/**
 * hash_table_delete -function that deletes a hash table
 * @ht: hash table to be delete
 * Return: nothing or NULL if fail
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *head;

	if (!ht || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			free(head->key);
			free(head->value);
			head = head->next;
			free(ht->array[i]);
			ht->array[i] = head;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
