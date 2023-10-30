#include "elf_info.h"
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
