#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1.
 *         if not - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int k;

	while (b == NULL)
	{
		return (0);
	}
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
		{
			return (0);
		}
		result = 2 * result + (b[k] - '0');
	}
	return (result);
}
