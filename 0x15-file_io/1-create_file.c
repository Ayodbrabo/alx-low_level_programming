#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
* create_file - Creates a file with the given text content.
* @filename: The name of the file to create.
* @text_content: The content to write to the file (can be NULL).
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t text_length, bytes_written;

if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
text_length = 0;
while (text_content[text_length])
text_length++;

bytes_written = write(fd, text_content, text_length);

if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
