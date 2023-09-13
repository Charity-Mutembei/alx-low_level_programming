#include "search_algos.h"
/**
 * interpolation_search - entry point
 * @array: array
 * @size: n of the array
 * @value: value to search
 * Return: -1
*/

int interpolation_search(int *array, size_t size, int value)
{
int low = 0;
int high = size - 1;

if (array == NULL || size == 0)
return (-1);
while (low <= high && value >= array[low] && value <= array[high])
{
size_t pos = low + (((double)(high - low) /
(array[high] - array[low])) * (value - array[low]));

printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);

if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;
}

printf("Value checked array[%d] is out of range\n", high);

return (-1);
}
