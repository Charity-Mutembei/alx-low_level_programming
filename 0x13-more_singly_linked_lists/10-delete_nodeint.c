#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list
 * @head: pointer to a pointer to the first node of the listint_t list
 * @index: index of the node that should be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev;
listint_t *current = NULL;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}

prev = NULL;
current = *head;
for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);

prev = current;
current = current->next;
}

prev->next = current->next;
if (current != NULL) {
free(current);
}

return (1);
}
