#include "main.h"
/**
 * puts2 - Prints one character out of two in string
 * @str: The strings arrays
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
