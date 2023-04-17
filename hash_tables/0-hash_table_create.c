#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Declare variables */
	hash_table_t *ht;         /* Pointer to new hash table */
	/* Array of hash_node_t pointers */
	hash_node_t **array;
	/* Counter variable for initializing array */
	unsigned long int i = 0;

	/* Check for invalid size */
	if (size == 0)
		return (NULL);

	/* Allocate memory for new hash table */
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	/* Allocate memory for array of hash_node_t pointers */
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}

	/* Initialize each element in the array to NULL */
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	/* Set the size and array fields of the hash table struct */
	ht->size = size;
	ht->array = array;

	/* Return a pointer to the new hash table */
	return (ht);
}
