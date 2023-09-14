#include <stdlib.h>
#include <stdio.h>


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
/**
 * exponential_search - entry point for prototype
 * @array: our array
 * @size: the n
 * @value: the value we are seraching for
 * Return: -1 for not found
*/
int exponential_search(int *array, size_t size, int value)
{
int bound = 1;
int low = bound / 2;
int high = (bound < (int)size) ? bound : (int)size - 1;

if (array == NULL || size == 0)
return (-1);

if (array[0] == value)
{
printf("Value checked array[0] = [%d]\n", array[0]);
return (0);
}

while (bound < (int)size && array[bound] < value)
{
printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
bound *= 2;
}

printf("Value found between indexes [%d] and [%d]\n", low, high);

return (binary_search(array, low, high));
}
