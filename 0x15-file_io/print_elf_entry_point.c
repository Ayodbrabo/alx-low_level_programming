#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include "elf_info.h"
/**
* print_elf_entry_point - Prints the Entry point address of the ELF file.
* @entry_point: The ELF entry point address.
*/
void print_elf_entry_point(Elf64_Addr entry_point)
{
printf("  %-23s", "Entry point address:");
printf("0x%lx\n", (unsigned long)entry_point);
}
