#include "main.h"
/**
 * void swap_int(int *a, int *b); - function taking in two pointer integers 
 * swap_int - function that takes a pointer to an int a and b as a parameter
 * and updates the value to interchange those of a to b and vice versa
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
