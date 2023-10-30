#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
* error_exit - Prints an error message and exits with the given exit code.
* @exit_code: The exit code.
* @format: The error message format string.
* @...: Additional arguments to be used with the format string.
*/
void error_exit(int exit_code, const char *format, ...)
{
va_list args;

va_start(args, format);
dprintf(STDERR_FILENO, format, args);
va_end(args);
exit(exit_code);
}

/**
* copy_file - Copies the content of one file to another.
* @source_fd: The source file descriptor.
* @dest_fd: The destination file descriptor.
*/
void copy_file(int source_fd, int dest_fd)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

do {
bytes_read = read(source_fd, buffer, BUFFER_SIZE);
if (bytes_read == -1)
{
close(source_fd);
close(dest_fd);
error_exit(98, "Error: Can't read from source file\n");
}

bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1)
{
close(source_fd);
close(dest_fd);
error_exit(99, "Error: Can't write to destination file\n");
}
} while (bytes_read > 0);
}
/**
* main - Copies the content of one file to another.
* @argc: The number of command-line arguments.
* @argv: An array of command-line arguments.
* Return: 0 on success, or the appropriate exit code on failure.
*/

int main(int argc, char *argv[])
{
int source_fd, dest_fd;
if (argc != 3)
{
error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
}

source_fd = open(argv[1], O_RDONLY);
if (source_fd == -1)
{
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}

dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (dest_fd == -1)
{
close(source_fd);
error_exit(99, "Error: Can't write to file %s\n", argv[2]);
}

copy_file(source_fd, dest_fd);

if (close(source_fd) == -1 || close(dest_fd) == -1)
{
error_exit(100, "Error: Can't close file descriptor\n");
}

return (0);
}
