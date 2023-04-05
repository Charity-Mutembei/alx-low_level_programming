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




Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0

Here's an implementation of the pop_listint function:

c
Copy code
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The integer value stored in the head node.
 *         If the linked list is empty, returns 0.
 */
int pop_listint(listint_t **head)
{
    int n;
    listint_t *temp;

    if (head == NULL || *head == NULL)
        return (0);

    n = (*head)->n;
    temp = *head;
    *head = (*head)->next;
    free(temp);

    return (n);
}

The function takes a pointer to a pointer to the head of a listint_t list as its parameter. It initializes an integer variable n to store the value of the head node, and a temporary listint_t pointer temp to the same address as the head pointer.

The function then checks if the head pointer is NULL or if the value of the head pointer is NULL. If either of these conditions is true, the function returns 0 to indicate that the list is empty.

If the list is not empty, the function assigns the value of the n member of the head node to n, assigns the address of the head node to temp, assigns the address of the next node to the head pointer, and frees the memory allocated for the original head node using free.

Finally, the function returns the value of n, which is the integer value stored in the original head node that was deleted.



Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL

Here's an implementation of the get_nodeint_at_index function:

c
Copy code
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: If successful, returns the address of the node at the specified
 *         index in the list. Otherwise, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *temp;

    temp = head;

    for (i = 0; temp != NULL && i < index; i++)
    {
        temp = temp->next;
    }

    if (i == index && temp != NULL)
    {
        return (temp);
    }

    return (NULL);
}

The function takes a pointer to the head of a listint_t list and an unsigned integer index as its parameters. It initializes a temporary listint_t pointer temp to the same address as the head pointer.

The function then uses a for loop to iterate through the linked list, starting with the head node, until it reaches the node at the specified index or the end of the list. For each iteration of the loop, the function updates temp to point to the next node in the list and increments the index counter i.

If the index counter i equals the specified index and the temp pointer is not NULL, the function returns the address of the node at the specified index using return (temp).

If the function does not find a node at the specified index, it returns NULL using return (NULL).






Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0

Here's an implementation of the sum_listint function:

c
Copy code
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If successful, returns the sum of all the data (n) in the list. Otherwise, returns 0.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *temp;

    temp = head;

    while (temp != NULL)
    {
        sum += temp->n;
        temp = temp->next;
    }

    return (sum);
}

The function takes a pointer to the head of a listint_t list as its parameter. It initializes an integer variable sum to 0 to hold the sum of all the data (n) in the list and a temporary listint_t pointer temp to the same address as the head pointer.

The function then uses a while loop to iterate through the linked list, starting with the head node, until it reaches the end of the list. For each iteration of the loop, the function adds the value of the n member of the current node to the sum variable and updates temp to point to the next node in the list.

After the loop has finished iterating through the entire list, the function returns the sum of all the data (n) in the list using return (sum). If the list is empty, the function returns 0.



Write a function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL

Here's an implementation of the insert_nodeint_at_index function:

c
Copy code

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should be added. Index starts at 0.
 * @n: The integer data for the new node.
 *
 * Return: If successful, returns a pointer to the new node. Otherwise, returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *temp, *new_node;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    for (i = 0; i < idx - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = temp->next;
    temp->next = new_node;

    return (new_node);
}

The function takes a pointer to a pointer to the head of a listint_t list, an unsigned integer idx specifying the position where the new node should be inserted (starting at 0), and an integer n which represents the data to be stored in the new node.

The function first checks if the head pointer is NULL. If it is, the function returns NULL, since there can be no linked list with a NULL head pointer.

The function then allocates memory for a new node using malloc and assigns the integer n to the n member of the new node. If malloc fails to allocate memory for the new node, the function returns NULL.

If idx is 0, the new node is added at the beginning of the list, and the function updates the head pointer to point to the new node.

If idx is greater than 0, the function uses a loop to traverse the linked list to the node at index idx-1 (since the new node will be inserted between the nodes at idx-1 and idx). If the end of the list is reached before the specified index, the function returns NULL and frees the allocated memory for the new node.

If the specified index is within the bounds of the linked list, the function creates a new node with the data n, assigns its next member to point to the next node in the list, and sets the next member of the previous node to point to the new node.

Finally, the function returns a pointer to the new node.