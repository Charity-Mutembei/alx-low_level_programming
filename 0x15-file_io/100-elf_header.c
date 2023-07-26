#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

#define ERR_EXIT(msg) { perror(msg); exit(98); }

void print_elf_header(const Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

    const char *osabi_str = NULL;
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            osabi_str = "UNIX - System V";
            break;
        case ELFOSABI_HPUX:
            osabi_str = "UNIX - HP-UX";
            break;
        case ELFOSABI_NETBSD:
            osabi_str = "UNIX - NetBSD";
            break;
        case ELFOSABI_LINUX:
            osabi_str = "UNIX - Linux";
            break;
        case ELFOSABI_SOLARIS:
            osabi_str = "UNIX - Solaris";
            break;
        case ELFOSABI_AIX:
            osabi_str = "UNIX - AIX";
            break;
        case ELFOSABI_IRIX:
            osabi_str = "UNIX - IRIX";
            break;
        case ELFOSABI_FREEBSD:
            osabi_str = "UNIX - FreeBSD";
            break;
        case ELFOSABI_TRU64:
            osabi_str = "UNIX - TRU64";
            break;
        case ELFOSABI_MODESTO:
            osabi_str = "Novell - Modesto";
            break;
        case ELFOSABI_OPENBSD:
            osabi_str = "UNIX - OpenBSD";
            break;
        default:
            osabi_str = "UNIX - Unknown OS/ABI";
            break;
    }
    printf("  OS/ABI:                            %s\n", osabi_str);

    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    const char *type_str = NULL;
    switch (header->e_type) {
        case ET_NONE:
            type_str = "NONE (None)";
            break;
        case ET_REL:
            type_str = "REL (Relocatable file)";
            break;
        case ET_EXEC:
            type_str = "EXEC (Executable file)";
            break;
        case ET_DYN:
            type_str = "DYN (Shared object file)";
            break;
        case ET_CORE:
            type_str = "CORE (Core file)";
            break;
        default:
            type_str = "<unknown>";
            break;
    }
    printf("  Type:                              %s\n", type_str);

    printf("  Entry point address:               0x%lx\n", header->e_entry);

    printf("\n");
}