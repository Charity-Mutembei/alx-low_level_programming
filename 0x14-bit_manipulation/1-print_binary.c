#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
unsigned long int i;
unsigned long int mask = 1ul << ((sizeof(unsigned long int) * 8) - 1);

for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
if (n & mask)
putchar('1');
else
putchar('0');

mask >>= 1;
}
}
