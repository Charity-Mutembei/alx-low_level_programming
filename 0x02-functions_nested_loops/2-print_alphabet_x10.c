#include "main.h"
<<<<<<< HEAD

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
=======
/**
 *  * print_alphabet_x10 - a function that prints 10 times the alphabet
 *   *
 *    * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int n, co;
co = 0;

while (co < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
co++;
_putchar('\n');
}
>>>>>>> 172acc7e9fd6a52c1ba6a8d5af41f59dd6111b91
}

