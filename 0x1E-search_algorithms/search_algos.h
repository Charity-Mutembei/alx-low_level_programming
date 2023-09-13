#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/**
 * main - header file for prototype
 * void prototypes (void)
 * int prototypes (int)
 * @array: protoypt
 * @size: prototype
 * @value: prototype
 * linear_search - entry point for prototype
 * binary_search - entry point for proptoype 2
 * jump_search - entry point for prototype 3
 * interpolation_search - entry point for prototype 4
 * exponential_search - entry point for prototype 4
 * Return: -1 for fail
 */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int exponential_search(int *array, size_t size, int value);

#endif
