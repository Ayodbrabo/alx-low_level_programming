#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "elf_info.h"
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
