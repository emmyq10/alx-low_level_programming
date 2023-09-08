#include "hash_tables.h"

/**
 * create_hash_table - Creates a hash table.
 * @table_size: The size of the hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *create_hash_table(unsigned long int table_size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = table_size;
	new_table->array = malloc(sizeof(hash_node_t *) * table_size);
	if (new_table->array == NULL)
		return (NULL);
	for (i = 0; i < table_size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
