#include <stdio.h>
/**
 * main - prints out first 98
 * *fibonacci suit numbers
 * *Return: return 0
 */
int main(void)
{

int nr = 0, n = 1, n1 = 2, n3;

while (nr <= 98)
{

n3 = n + n1;
printf("%d", n3);
nr++;

n = n1;
n1 = n3;

if (nr == 98)
{
printf("\n");
}
else
{
printf(", ");
}
}

return (0); 

}
