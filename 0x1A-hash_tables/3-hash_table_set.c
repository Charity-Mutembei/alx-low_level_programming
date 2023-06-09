#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - Create a new hash node with the given key and value
 * @key: The key for the new node
 * @value: The value for the new node
 *
 * Return: The newly created hash node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (NULL);
}

return (new_node);
}

/**
 * hash_table_set - Add or update a key/value pair in the hash table
 * @ht: The hash table to add/update the key/value pair in
 * @key: The key to add/update
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node = NULL, *current = NULL;

if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
if (current->value == NULL)
{
return (0);
}
return (1);
}
current = current->next;
}

new_node = create_node(key, value);
if (new_node == NULL)
{
return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
