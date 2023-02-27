#include "main.h"
/**
 * void swap_int(int *a, int *b); - function taking in two pointer integers a & b
 * swap_int - the name of the function
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
