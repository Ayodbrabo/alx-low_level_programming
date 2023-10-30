#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "elf_info.h"
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
