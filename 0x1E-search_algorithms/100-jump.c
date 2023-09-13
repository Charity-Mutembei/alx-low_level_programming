#include <math.h>
#include "search_algos.h"
/**
 * jump_search - entry point for function
 * @array: the array we have as an argument
 * @size: the n number of items in array
 * @value: the value we are looking for
 * Return: taking -1 for not found
*/
int jump_search(int *array, size_t size, int value)
{
size_t jump = (size_t)sqrt(size);

size_t i;
size_t left = 0;
size_t right = 0;

if (array == NULL || size == 0)
{
return (-1);
}

while (right < size)
{
right = (right + jump < size) ? right + jump : size - 1;

printf("Value checked array[%lu] = [%d]\n", right, array[right]);
if (array[right] >= value)
{
break;
}

left = right;
}

for (i = left; i <= right; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}
}
return (-1);
}
