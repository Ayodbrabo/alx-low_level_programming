#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "elf_info.h"
/**
* print_elf_abi_version - Prints the ABI Version of the ELF file.
* @e_ident: The ELF identification bytes.
*/
void print_elf_abi_version(unsigned char *e_ident)
{
printf("  %-23s", "ABI Version:");
printf("%d\n", e_ident[EI_ABIVERSION]);
}
