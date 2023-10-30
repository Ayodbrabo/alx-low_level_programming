#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "elf_info.h"
/**
* print_elf_version - Prints the ELF version.
* @e_ident: The ELF identification bytes.
*/
void print_elf_version(unsigned char *e_ident)
{
printf("  %-23s", "Version:");
printf("%d (current)\n", e_ident[EI_VERSION]);
}
