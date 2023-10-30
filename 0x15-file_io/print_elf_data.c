#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "elf_info.h"
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
