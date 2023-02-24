#include "main.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 * print_alphabet - prints the alphabets
 * Description: a function that prints letters in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);

	}
	_putchar('\n');
=======
 *  * print_alphabet - prints the alphabets
 *   * Description: a function that prints letters in lower case
 *    * Return: 0
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
>>>>>>> 172acc7e9fd6a52c1ba6a8d5af41f59dd6111b91
}

