#include <unistd.h>
/**
 * main - Entry point
 * message - and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * return - 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 80);
	return (1);
}
