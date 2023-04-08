#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int result = 0;

if (b == NULL)
return (0);
while (b[i])
{
if (b[i] == '0' || b[i] == '1')
{
result = (result << 1) + (b[i] - '0');
}
else
{
return (0);
}
i++;
}
return (result);
}
