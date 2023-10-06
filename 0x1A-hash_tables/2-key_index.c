#include "hash_tables.h"

/**
 * key_index - function to get index at which value/pair is stored
 * @key: key
 * @size: size of array
 * Return: index of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
