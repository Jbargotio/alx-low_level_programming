#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int num = hash_djb2((unsigned char *)key);
	unsigned long int _key = num % size;
	return _key;
}
