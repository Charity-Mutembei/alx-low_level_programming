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
unsigned int result = 0;
int len = strlen(b);
int i;

/*Check for invalid input*/
for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
/*Return 0 if there is an invalid character*/
}
}

/*Convert binary to unsigned int*/
for (i = 0; i < len; i++)
{
if (b[len - i - 1] == '1')
{
result += (unsigned int) pow(2, i);
}
}

return (result);
}
