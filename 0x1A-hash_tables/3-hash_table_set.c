#include "hash_tables.h"

/**
 * hash_table_set - function to update element
 * @ht: ptr to the hash table
 * @key: key
 * @value: value
 * Return: 1- success else 0
 *
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *v_cpy;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_cpy = strdup(value);
	if (v_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_cpy;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(v_cpy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = v_cpy;
	n->next = ht->array[idx];
	ht->array[idx] = n;

	return (1);
}
