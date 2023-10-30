#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "elf_info.h"

/**
* print_elf_magic - Prints the ELF magic bytes.
* @e_ident: The ELF identification bytes.
*/
void print_elf_magic(unsigned char *e_ident)
{
int i;

printf("  %-23s", "Magic:");
for (i = 0; i < EI_NIDENT; i++)
{
printf(" %02x", e_ident[i]);
}
printf("\n");
}
