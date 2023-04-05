#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head, *loop_node = NULL;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

if (current >= current->next)
{
loop_node = current->next;
while (loop_node != current)
{
count++;
printf("[%p] %d\n", (void *)loop_node, loop_node->n);
loop_node = loop_node->next;
}
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}

current = current->next;
}

if (loop_node != NULL)
exit(98);

return (count);
}
