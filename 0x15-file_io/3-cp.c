#include <errno.h>
#include "main.h"
int close_fd(int fd);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 97-100 on failure.
 */
int main(int argc, char *argv[])
{
char buffer[1024];
int bytes_read = 0, end_of_file = 1, from_fd = -1, to_fd = -1, error = 0;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

from_fd = open(argv[1], O_RDONLY);
if (from_fd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (to_fd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close_fd(from_fd);
exit(99);
}

while (end_of_file)
{
end_of_file = read(from_fd, buffer, 1024);
if (end_of_file < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close_fd(from_fd);
close_fd(to_fd);
exit(98);
}
else if (end_of_file == 0)
break;
bytes_read += end_of_file;
error = write(to_fd, buffer, end_of_file);
if (error < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close_fd(from_fd);
close_fd(to_fd);
exit(99);
}
}
error = close_fd(to_fd);
if (error < 0)
{
close_fd(from_fd);
exit(100);
}
error = close_fd(from_fd);
if (error < 0)
exit(100);
return (0);
}

/**
 * close_fd - A function that closes a file and prints an error message if
 * the file cannot be closed.
 * @fd: The file descriptor to close.
 *
 * Return: 1 on success, -1 on failure.
 */
int close_fd(int fd)
{
int error;

error = close(fd);
if (error < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
return (error);
}




