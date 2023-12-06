#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index- index that matches key
 *
 * @size: size of the array
 * @key: unique key
 * Return: index of of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size); /* gives index */
}
