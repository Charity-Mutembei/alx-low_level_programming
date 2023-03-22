#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s [number of bytes >= 0]\n", argv[0]);
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		fprintf(stderr, "Error: number of bytes must be >= 0\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}

