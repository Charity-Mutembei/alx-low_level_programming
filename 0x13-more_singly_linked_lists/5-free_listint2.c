#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head pointer to NULL.
 * @head: A pointer to a pointer to the head of the listint_t list to be freed.
 *
 * Return: None.
 */
void free_listint2(listint_t **head)
{
listint_t *current_node;

while (*head != NULL)
{
current_node = *head;
*head = (*head)->next;
free(current_node);
}

*head = NULL;
}
