#include "search_algos.h"
#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary_recursive - Recursive helper function
 * @left: variable
 * @array: variable
 * @right: variable
 * @value: variable
 * Return: -1
 */
int advanced_binary_recursive(int *array, int left, int right, int value);
/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */

int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function
 * @left: variable
 * @array: variable
 * @right: variable
 * @value: variable
 * Return: -1
 */
int advanced_binary_recursive(int *array, int left, int right, int value)
{
int mid;
int i;
mid = left + (right - left) / 2;

if (left > right)
return (-1);

printf("Searching in array: %d", array[left]);
for (i = left + 1; i <= right; i++)
printf(", %d", array[i]);
printf("\n");

if (array[mid] == value)
{
if (mid == left || array[mid - 1] != value)
return (mid);
return (advanced_binary_recursive(array, left, mid, value));
}
else if (array[mid] < value)
return (advanced_binary_recursive(array, mid + 1, right, value));
else
return (advanced_binary_recursive(array, left, mid - 1, value));
}
