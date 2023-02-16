#include <unistd.h>
/**
 * main - extry point
 * message - and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * return - 1
 */
int main(void)
{
	const char  message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDOUT_FILENO, message, sizeof(message) - 1);
	return (1);
}
