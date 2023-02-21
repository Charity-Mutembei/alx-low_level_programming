#include "main.h"

/**
 * print_alphabet - Entry point for the function printing alphabets in
 * lowercase
 *
 * return 0 - for success
 */
void print_alphabet(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
