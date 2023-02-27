#include "main.h"
/**
 * puts2 - Prints one character out of two in string
 * @str: The strings arrays
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i ++;
	}
	_putchar('\n');
}
