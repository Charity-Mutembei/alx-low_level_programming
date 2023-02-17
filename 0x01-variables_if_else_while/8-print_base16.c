#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char hex_digits[] = "0123456789abcdef";
for (i = 0; i < 16; i++)
{
putchar(hex_digits[i]);
}
putchar('\n');
return (0);
}
