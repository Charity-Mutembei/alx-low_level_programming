this is a readme for thw 0x013-single links project



/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

This is a struct definition for a singly linked list node in C language. The struct is named listint_s and it contains two members:

n - an integer value representing the data of the node.
next - a pointer to the next node in the list.
The typedef keyword is used to create an alias listint_t for struct listint_s. This allows you to refer to this struct type as listint_t instead of struct listint_s in your code.

This struct definition can be used to create a singly linked list by creating nodes of type listint_t and linking them together using the next pointer.





Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf

Here's an implementation of the print_listint function:

c
Copy code
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        node_count++;
    }

    return (node_count);
}
The function takes a pointer to the head of a listint_t list as its parameter. It then iterates through the list using a while loop, printing the value of each node's n member using printf. It also increments a node_count variable with each iteration to keep track of the number of nodes.

Finally, the function returns the node_count variable to indicate the number of nodes in the list.





Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);

Here's an implementation of the listint_len function:

c
Copy code
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        node_count++;
        h = h->next;
    }

    return (node_count);
}
The function takes a pointer to the head of a listint_t list as its parameter. It then iterates through the list using a while loop, incrementing a node_count variable with each iteration to keep track of the number of nodes.

Finally, the function returns the node_count variable to indicate the number of nodes in the list.





Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

Here's an implementation of the add_nodeint function:

c
Copy code
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
The function takes a pointer to a pointer to the head of a listint_t list and an integer value n as its parameters. It first allocates memory for a new node using malloc and assigns the address to a new listint_t pointer new_node.

If malloc fails to allocate memory, the function returns NULL to indicate failure.

If memory allocation is successful, the function assigns the integer value n to the new node's n member and assigns the current head of the list to the new node's next member. Finally, it assigns the address of the new node to the head pointer, effectively making the new node the new head of the list.

The function then returns the address of the new node.





Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

Here's an implementation of the add_nodeint_end function:

c
Copy code
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *last_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        last_node = *head;
        while (last_node->next != NULL)
        {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }

    return (new_node);
}
The function takes a pointer to a pointer to the head of a listint_t list and an integer value n as its parameters. It first allocates memory for a new node using malloc and assigns the address to a new listint_t pointer new_node.

If malloc fails to allocate memory, the function returns NULL to indicate failure.

If memory allocation is successful, the function assigns the integer value n to the new node's n member and assigns NULL to the new node's next member, indicating that it will be the last node in the list.

If the list is empty (i.e., the head pointer is NULL), the function assigns the new node to the head pointer and returns its address.

If the list is not empty, the function iterates through the list using a while loop until it finds the last node. It then assigns the new node to the last node's next member, effectively making the new node the last node in the list.

Finally, the function returns the address of the new node.





Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);

Here's an implementation of the free_listint function:

c
Copy code
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 *
 * Return: None.
 */
void free_listint(listint_t *head)
{
    listint_t *current_node;

    while (head != NULL)
    {
        current_node = head;
        head = head->next;
        free(current_node);
    }
}
The function takes a pointer to the head of a listint_t list as its parameter. It initializes a temporary listint_t pointer current_node to the same address as the head pointer.

The function then enters a loop that continues until the head pointer is NULL. In each iteration of the loop, the function assigns the current value of the head pointer to the next member of the current node using the -> operator. It then frees the memory allocated for the current node using free and assigns the address of the next node to the head pointer.

Finally, the function returns nothing, as the list has been freed.





Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL

Here's an implementation of the free_listint2 function:

c
Copy code

#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}

head = NULL;
}

Your implementation of free_listint2 looks correct. It takes a pointer to a pointer to the head of a listint_t list as its parameter, initializes a temporary listint_t pointer tmp to the same address as the head pointer, and then enters a loop that continues until the head pointer is NULL.

In each iteration of the loop, the function assigns the value of the next member of the current node to tmp, frees the memory allocated for the current node using free, and assigns the address of the next node to the head pointer.

After the loop has finished, the function sets the value of the head pointer to NULL, indicating that the list is now empty.