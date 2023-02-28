#include <ctype.h>
/**
 * * _atoi - Convert string to an integer.
 * * @s: Pointer to a character string.
 * *
 * * Return: void.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int seen_digit = 0;

while (*s)
{
if (isdigit(*s))
{
seen_digit = 1;
result = result * 10 + (*s - '0');
}
else if (*s == '-' && !seen_digit)
{
sign = -1;
}
else if (*s == '+' && !seen_digit)
{
sign = 1;
}
else if (seen_digit)
{
break;
}
s++;
}
return sign * result;
}

