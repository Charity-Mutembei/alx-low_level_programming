#include "search_algos.h"
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

return (binary_search(array, low, high, value));
}
