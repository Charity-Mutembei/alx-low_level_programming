#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 * Return: Pointer to the newly created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

for (i = 0; i < size; i++)
ht->array[i] = NULL;

ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
 * shash_table_set - Add or update an element in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key string
 * @value: The value corresponding to the key
 * Return: 1 if success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *node, *temp;
unsigned long int index;

if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
return (0);

index = key_index((const unsigned char *)key, ht->size);

temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (1);
}
temp = temp->next;
}

node = malloc(sizeof(shash_node_t));
if (node == NULL)
return (0);

node->key = strdup(key);
node->value = strdup(value);
node->next = ht->array[index];
ht->array[index] = node;
node->sprev = NULL;
node->snext = NULL;

if (ht->shead == NULL)
{
ht->shead = node;
ht->stail = node;
}
else if (strcmp(node->key, ht->shead->key) < 0)
{
node->snext = ht->shead;
ht->shead->sprev = node;
ht->shead = node;
}
else
{
temp = ht->shead;
while (temp->snext != NULL && strcmp(node->key, temp->snext->key) > 0)
temp = temp->snext;

node->sprev = temp;
node->snext = temp->snext;

if (temp->snext == NULL)
ht->stail = node;
else
temp->snext->sprev = node;

temp->snext = node;
}

return (1);
}

/**
 * shash_table_get - Retrieve a value associated with a
 * key from the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to look up
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL || strcmp(key, "") == 0)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);

node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}

return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;

if (ht == NULL)
return;

printf("{");
node = ht->shead;
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
if (node->snext != NULL)
printf(", ");
node = node->snext;
}
printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *temp;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
temp = node;
node = node->next;
free(temp->key);
free(temp->value);
free(temp);
}
}

free(ht->array);
free(ht);
}
