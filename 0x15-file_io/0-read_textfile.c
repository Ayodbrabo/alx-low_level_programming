#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#include <stdio.h>
/**
* read_textfile - a function that reads a text file and
* prints it to the POSIX standard output.
* @filename: is the name of the file to be created
* @letters: is the number of letters it should read and print
* Return: either 0 or a value
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read, bytes_written;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd);
free(buffer);
return (0);
}
close(fd);
free(buffer);
return (bytes_written);
}
