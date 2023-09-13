#include "search_algos.h"
#include <math.h>
/**
 * jump_search - entry point for function
 * @array: the array we have as an argument
 * @size: the n number of items in array
 * @value: the value we are looking for
 * Return: taking -1 for not found
*/
int jump_search(int *array, size_t size, int value)
{
int step = (int)sqrt(size);

int prev = 0;
int current = 0;
int i;

if (array == NULL || size == 0)
{
return (-1);
}

/*jump through the array until we find a range that may contain the value*/
while (current < (int)size && array[current] < value)
{
printf("Value checked array[%d] = [%d]\n", current, array[current]);
prev = current;
current += step;
}

printf("Value found between indexes [%d] and [%d]\n", prev, current);

/*Perform a linear search in the identified range*/
for (i = prev; i < (int)size && i <= current; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
/*Value not found*/
return (-1);
}
