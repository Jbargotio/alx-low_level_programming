#include "hash_tables.h"
/**
 *  key_index - function that returns the index of a key/
 *              value pair in a hash table
 * @key: key to be hashed
 * @size: size of the array
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num = hash_djb2((unsigned char *)key);
	unsigned long int _key = num % size;

	return (_key);
}
