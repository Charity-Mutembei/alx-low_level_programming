#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strdup;
	int i;

	/*first check if str (in the char *str) is empty*/
	if (str == 0)
	{
		return (NULL);
	}
	strdup = (char *)malloc(sizeof(char) * 2);
	/*now copy the str to the dup - strdup*/
	for (i = 0; str[i] != '\0'; i++)
	{
		strdup[i] = str[i];
	}
	/* allocate the memory*/
	/*strdup = malloc(sizeof(char) *2);*/
	if (strdup == 0)
	{
		return (NULL);
	}
	return (strdup);
}
