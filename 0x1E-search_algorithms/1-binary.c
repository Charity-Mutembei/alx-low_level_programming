#include "search_algos.h"

/**
 * binary_search - Entry point
 * int binary_search(int *array, size_t size, int value) - prototype
 * @array: pointer and array
 * @size: the n of the array
 * @value: that we are looking for
 * Return: -1 for no success
 */

int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
size_t right = size - 1;
size_t i;

if (array == NULL || size == 0)
return (-1);

while (left <= right)
{
int mid = (right + left) / 2;
printf("Searching in array: %d", array[left]);
for (i = left + 1; i <= right; i++)
{
printf(", %d", array[i]);
}
printf("\n");

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}
