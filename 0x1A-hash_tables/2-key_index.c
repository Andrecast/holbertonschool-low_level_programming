#include "hash_tables.h"

/**
 * key_index- function that gives you the index of a key.
 * @key: key for save
 * @size: size of the array of the hash table
 * Return: index of key/value
 **/


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
