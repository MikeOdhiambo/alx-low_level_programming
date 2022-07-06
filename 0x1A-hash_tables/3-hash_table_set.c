#include "hash_tables.h"

/**
 * create_node - Creates a node
 * @key: item key to be hashed
 * @value: value associated with key
 * Return: Pointer to item, NULL (FAIL)
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!item)
	{
		return (NULL);
	}
	item->key = (char *)malloc(sizeof(key) + 1);
	item->value = (char *)malloc(sizeof(value) + 1);
	item->next = NULL;
	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}

/**
 * handle_collision - Handles collisions in similar indices
 * @curr: pointer to current item on table
 * @item: item to insert in table
 * Return: 1 (SUCCESS), 0 (FAIL)
 */

int handle_collision(hash_node_t *curr, hash_node_t *item)
{
	hash_node_t *temp = curr;

	item->next = temp;
	temp->next = NULL;
	curr = item;

	return (1);
}

/**
 * hash_table_set - insert item into hash table
 * @ht: Pointer to table
 * @key: Item key
 * @value: Item value
 * Return: 1 (SUCCESS), 0 (FAIL)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *item = create_node(key, value);
	hash_node_t *curr_item = ht->array[index];

	if (curr_item == NULL)
	{
		if (index >= ht->size)
		{
			return (0);
		}
		else
		{
			ht->array[index] = item;
			return (1);
		}
	}
	else
	{
		if (strcmp(curr_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			handle_collision(ht->array[index], item);
		}
	}
	return (0);
}
