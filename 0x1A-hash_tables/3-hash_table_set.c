#include "hash_tables.h"
#include <stddef.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int _key = key_index((unsigned char *) key, ht->size);
	long unsigned int i = 0;
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
	while(ht->array[_key]->key != 0 && (i < ht->size))
	{
		if(ht->array[_key]->key == key)
		{
			ht->array[_key]->value = (char *)value;
		}
		_key = (_key + 1) % ht->size;
		i++;
	}

	if (ht->array[_key]->key == 0)
	{
		ht->array[_key]->key = (char*) key;
		ht->array[_key]->value = (char *)value;
	}
	return 1;
}
