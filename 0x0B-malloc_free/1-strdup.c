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

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		strdup = (char *)malloc(sizeof(char) * (i + 1));
		strdup[i] = str[i];
	}
	if (strdup == 0)
	{
		return (NULL);
	}
	return (strdup);
}
