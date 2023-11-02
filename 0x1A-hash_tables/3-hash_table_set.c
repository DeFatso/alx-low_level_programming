/**
 * hash_table_set - Add an element to the hash table.
 * @ht: The hash table to add/update the key/value pair.
 * @key: The key (must not be an empty string).
 * @value: The value associated with the key (duplicated; can be an empty string).
 *
 * Return: 1 if the operation succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node;
	hash_node_t *current;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);

	i = key_index(key, ht->size)
	return (1);
}
