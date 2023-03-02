#include "main.h"
void print_number(int n)
{
	int divisor = 1, digit;
	/* handle the negative numbers*/
	
	if (n < 0)
	{
		_putchar('-');
	n *= -1;	
	}
	/* find the divisor needed to get the leftmost digit*/
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	/* print each digit from left to right*/
	while (divisor != '\0')
	{
		digit = n / divisor;

		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
