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
    int startJump = 0;
    int endJump = 0;
    int jump = sqrt(size);

    while (endJump < (int)size)
    {
        if (array[endJump] < value )
        {
            printf("Value checked array [%d] = [%d]\n", endJump, array[endJump]);
            startJump = endJump;
            endJump += jump;
        }
        break;
    }
    printf("Value found between indexes [%d] and [%d]\n", startJump, endJump);

    if (endJump > (int)size - 1)
    {
        endJump = size - 1;
    }

    while (startJump <= endJump)
    {
        printf("Value checked array[%d] = [%d]\n", startJump, array[startJump]);

        if (array[startJump] == value)
        {
            return (startJump);
        }
        startJump++;
    }
    return (-1); 
}
