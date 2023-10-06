#include "hash_tables.h"

/**
 * key_index - func ging index of a key
 * @key: te key to give index
 * @size: array size
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

