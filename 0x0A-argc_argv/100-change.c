#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the min numbers of coins per given ammount of money.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 * Return: 0 success 1 failure.
 */
int main(int argc, char **argv)
{
int coins = 0;
int value[5] = {25, 10, 5, 2, 1};
int amount = atoi(argv[1]);
int i = 0;

if (argc != 2)
{
printf("Error\n");
return 1;
}
for (i = 0; i < 5; i++)
{
coins += amount / value[i];
amount %= value[i];
}
printf("%d\n", coins);
return 0;
}
