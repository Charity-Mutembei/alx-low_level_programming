#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: 0 when NULL
 */
char *_strchr(char *s, char c)
{
	while (*s == '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
