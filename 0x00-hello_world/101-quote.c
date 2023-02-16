#include <unistd.h>
/**
 * main - extry point
 * message - and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * return - 1
 */
int main(void)
{
	const char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, m, sizeof(m) - 1);
	return (1);
}
