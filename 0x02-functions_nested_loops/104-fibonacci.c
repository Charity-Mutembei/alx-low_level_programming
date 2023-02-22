#include <stdio.h>
/**
 * main - prints out first 98
 * *fibonacci suit numbers
 * *Return: return 0
 */
int main(void)
{

int n = 1, m = 2, i;

printf("%d, %d", n, m);
for (i = 3; i <=98; i++) 
{
int tmp = n + m;

printf(", %d", tmp);
n = m;
m = tmp;
}

printf("\n");
return (0);
}
