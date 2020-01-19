#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of hash table, unsigned long int type.
 * Return: returns a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int c;
	hash_table_t *table = NULL;

	/* allocate memory for hash table*/
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	/*allocate memory for node in hash table*/
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (c = 0; c < size; c++)
	{
		table->array[c] = NULL;
	}
	return (table);
}
