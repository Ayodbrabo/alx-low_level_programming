#ifndef ELF_INFO_H
#define ELF_INFO_H

#include <elf.h>

void print_elf_magic(unsigned char *e_ident);
void print_elf_class(unsigned char *e_ident);
void print_elf_data(unsigned char *e_ident);
void print_elf_version(unsigned char *e_ident);
void print_elf_osabi(unsigned char *e_ident);
void print_elf_abi_version(unsigned char *e_ident);
void print_elf_type(uint16_t type);
void print_elf_entry_point(Elf64_Addr entry_point);

void print_elf_info(Elf64_Ehdr *header);

#endif
