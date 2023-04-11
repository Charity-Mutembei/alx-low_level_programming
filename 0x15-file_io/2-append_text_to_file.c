#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: string to add to end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, text_len;

if (filename == NULL)
return (-1);

if (access(filename, F_OK) == -1)
return (-1);

if (text_content == NULL)
return (1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

text_len = strlen(text_content);
bytes_written = write(fd, text_content, text_len);
if (bytes_written == -1 || bytes_written != text_len)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
