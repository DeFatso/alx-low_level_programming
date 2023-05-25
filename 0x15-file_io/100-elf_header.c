#include "main.h"
/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 * Return: 0
 */
int main(int ac, char **av)
{
	Elf64_Ehdr header;
	int x;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", av[0]);
		return (98);
	}
	x = open(av[1], O_RDONLY);
	if (x == -1)
	{
		fprintf(stderr, "Error: Unable to open file\n");
		return (98);
	}
	if
		(
			header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3
		)
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			return (98);
		}
	elf_header(&header);
	close(x);
	return (0);
}

/**
 * elf_header - prints info in the elf header
 * @header: parameter
 */
void elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("magic");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class: %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
			 "Unknown");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: ");

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			 printf("UNIX System V ABI\n");
			break;
		case ELFOSABI_HPUX:
			 printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			 printf("NetBSD ABI\n");
			break;
		default:
			 printf("unknown\n");
			break;
	}
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: %lx\n", (unsigned long)header->e_entry);
}

