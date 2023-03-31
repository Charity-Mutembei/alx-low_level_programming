#include <stdio.h>
#include "lists.h"
void before_main(void) __attribute__ ((constructor));
/**
 *before_main - prints a msg before the main
 * main - check the code *
 * Return: Always 0.
 */
void before_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
return (0);
}
