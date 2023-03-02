#include "main.h"
/**
 *  *string_toupper - changes all lowercase letters of a string to uppercase.
 *   *@x: pointer to string.
 *    *
 *     *Return: pointer to uppercase string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
       	{
		if (str[i] >= 'a' && str[i] <= 'z')
	       	{
			str[i] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}
