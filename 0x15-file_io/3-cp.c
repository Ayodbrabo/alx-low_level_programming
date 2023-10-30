#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
* error_exit - Prints an error message and exits with the given code.
* @code: The exit code.
* @message: The error message to print.
*/
void error_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "Error: %s\n", message);
exit(code);
}

/**
* main - Entry point for the cp program.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the arguments.
* Return: 0 on success, 97, 98, 99, or 100 on errors.
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t num_read, num_written;
char buffer[BUF_SIZE];

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
error_exit(98, "Can't read from file_from");
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (file_to == -1)
{
close(file_from);
error_exit(99, "Can't write to file_to");
}
while ((num_read = read(file_from, buffer, BUF_SIZE)) > 0)
{
if (num_read == -1)
{
close(file_from);
close(file_to);
error_exit(98, "Can't read from file_from");
}
num_written = write(file_to, buffer, num_read);
if (num_written != num_read)
{
close(file_from);
close(file_to);
error_exit(99, "Can't write to file_to");
}
}
if (close(file_from) == -1)
{
error_exit(100, "Can't close file descriptor for file_from");
}
if (close(file_to) == -1)
error_exit(100, "Can't close file descriptor for file_to");
return (0);
}
