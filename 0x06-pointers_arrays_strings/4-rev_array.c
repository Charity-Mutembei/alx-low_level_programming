#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *Return: void.
 */
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1;

while (i < j)
{
int tmp = a[i];

a[i] = a[j];
a[j] = tmp;
i++;
j--;
}
}
