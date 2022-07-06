#include "hash_tables.h"

/**
 * key_index -  Finds the table index of a string
 * @key: key value
 * @size: size of table
 * Return: Index value for key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_val = hash_djb2(key);

	return (h_val % size);
}
