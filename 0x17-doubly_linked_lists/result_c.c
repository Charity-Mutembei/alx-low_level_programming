#include <stdio.h>
/**
 * is_palindrome - Checks if a number is a palindrome.
 * @n: The number to check.
 *
 * Return: 1 if the number is a palindrome, 0 otherwise.
 */
int is_palindrome(int n)
{
int reverse = 0;
int original = n;

while (n != 0)
{
int remainder = n % 10;
reverse = reverse * 10 + remainder;
n /= 10;
}

return (original == reverse);
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
int largest_palindrome = 0;

for (int i = 100; i < 1000; i++)
{
for (int j = i; j < 1000; j++)
{
int product = i * j;
if (is_palindrome(product) && product > largest_palindrome)
{
largest_palindrome = product;
}
}
}

/*save the file*/
FILE *file = fopen("102-result", "w");
if (file != NULL)
{
fprintf(file, "%d", largest_palindrome);
fclose(file);
}

return (0);
}
