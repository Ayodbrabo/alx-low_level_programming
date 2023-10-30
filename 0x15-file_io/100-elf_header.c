#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "elf_info.h"
/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
return (98);
}
if (read(fd, &header, sizeof(header)) != sizeof(header) ||
header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
close(fd);
return (98);
}

print_elf_info(&header);

close(fd);
return (0);
}
