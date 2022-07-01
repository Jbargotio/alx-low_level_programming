#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *hash_table = malloc(sizeof(hash_table_t));
        if (hash_table == NULL)
        {
                return NULL;
        }
        hash_table->size = size;

        hash_table->array = malloc(sizeof(hash_node_t) * size);
        if (hash_table->array == NULL)
        {
                free(hash_table);
        }
        return hash_table;
}
