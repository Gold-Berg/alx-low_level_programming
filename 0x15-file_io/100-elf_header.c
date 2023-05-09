#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(char *msg);

int main(int argc, char *argv[])
{
int i = 0;
int fd;
Elf64_Ehdr ehdr;

if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
return 98;
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
print_error("Error: Cannot read file");
return 98;
}

if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
{
print_error("Error: Cannot read ELF header");
close(fd);
return 98;
}

if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
{
print_error("Error: Not an ELF file");
close(fd);
return 98;
}

printf("Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", ehdr.e_ident[i]);
}
printf("\nClass:                             %s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("Data:                              %s\n", ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("Version:                           %d\n", ehdr.e_ident[EI_VERSION]);
printf("OS/ABI:                            %d\n", ehdr.e_ident[EI_OSABI]);
printf("ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);
printf("Type:                              %d\n", ehdr.e_type);
printf("Entry point address:               0x%lx\n", ehdr.e_entry);
printf("Start of program headers:          %lu (bytes into file)\n", ehdr.e_phoff);
printf("Start of section headers:          %lu (bytes into file)\n", ehdr.e_shoff);
printf("Flags:                             0x%x\n", ehdr.e_flags);
printf("Size of this header:               %d (bytes)\n", ehdr.e_ehsize);
printf("Size of program headers:           %d (bytes)\n", ehdr.e_phentsize);
printf("Number of program headers:         %d\n", ehdr.e_phnum);
printf("Size of section headers:           %d (bytes)\n", ehdr.e_shentsize);
printf("Number of section headers:         %d\n", ehdr.e_shnum);
printf("Section header string table index: %d\n", ehdr.e_shstrndx);

if (close(fd) == -1)
{
print_error("Error: Cannot close file");
return 100;
}

return 0;
}

void print_error(char *msg)
{
fprintf(stderr, "%s\n", msg);
}
