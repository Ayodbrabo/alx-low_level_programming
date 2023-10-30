#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

/**
* print_elf_magic - Prints the ELF magic bytes.
* @e_ident: The ELF identification bytes.
*/
void print_elf_magic(unsigned char *e_ident)
{
printf("  %-23s", "Magic:");
for (int i = 0; i < EI_NIDENT; i++)
{
printf(" %02x", e_ident[i]);
}
printf("\n");
}

/**
* print_elf_class - Prints the ELF class.
* @e_ident: The ELF identification bytes.
*/
void print_elf_class(unsigned char *e_ident)
{
printf("  %-23s", "Class:");
switch (e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
}
}

/**
* print_elf_data - Prints the ELF data encoding.
* @e_ident: The ELF identification bytes.
*/
void print_elf_data(unsigned char *e_ident)
{
printf("  %-23s", "Data:");
switch (e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little-endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big-endian\n");
break;
default:
printf("<unknown>\n");
}
}

/**
* print_elf_version - Prints the ELF version.
* @e_ident: The ELF identification bytes.
*/
void print_elf_version(unsigned char *e_ident)
{
printf("  %-23s", "Version:");
printf("%d (current)\n", e_ident[EI_VERSION]);
}

/**
* print_elf_osabi - Prints the OS/ABI of the ELF file.
* @e_ident: The ELF identification bytes.
*/
void print_elf_osabi(unsigned char *e_ident)
{
printf("  %-23s", "OS/ABI:");
switch (e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown>\n");
}
}

/**
* print_elf_abi_version - Prints the ABI Version of the ELF file.
* @e_ident: The ELF identification bytes.
*/
void print_elf_abi_version(unsigned char *e_ident)
{
printf("  %-23s", "ABI Version:");
printf("%d\n", e_ident[EI_ABIVERSION]);
}

/**
* print_elf_type - Prints the Type of the ELF file.
* @type: The ELF type.
*/
void print_elf_type(uint16_t type)
{
printf("  %-23s", "Type:");
switch (type)
{
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
}
}

/**
* print_elf_entry_point - Prints the Entry point address of the ELF file.
* @entry_point: The ELF entry point address.
*/
void print_elf_entry_point(Elf64_Addr entry_point)
{
printf("  %-23s", "Entry point address:");
printf("0x%lx\n", (unsigned long)entry_point);
}

void print_elf_info(Elf64_Ehdr *header)
{
print_elf_magic(header->e_ident);
print_elf_class(header->e_ident);
print_elf_data(header->e_ident);
print_elf_version(header->e_ident);
print_elf_osabi(header->e_ident);
print_elf_abi_version(header->e_ident);
print_elf_type(header->e_type);
print_elf_entry_point(header->e_entry);
}


int main(int argc, char *argv[])
{
int fd;

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

Elf64_Ehdr header;
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
