#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  * rev_string - This fuction print a string reverser
 *   *
 *    *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
int len = 0, rev = 0;
char temp;

while (s[rev++])
len++;

for (rev = len - 1; rev >= len / 2; rev--)
{
temp = s[rev];
s[rev] = s[len - rev - 1];
s[len - rev - 1] = temp;
}
}
