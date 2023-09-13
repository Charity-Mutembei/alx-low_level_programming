#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
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
 * Return: -1 for fail
 */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
