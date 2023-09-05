#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <elf.h>

#define ELF_MAGIC_SIZE 16

/* Function to print the ELF header information */
void print_elf_header(const Elf64_Ehdr *header) {
	int i;

	printf("Magic:   ");
	for (i = 0; i < ELF_MAGIC_SIZE; i++) {
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	/* Print ELF class, data encoding, version, OS/ABI, and ABI version */
	printf("Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	/* Print ELF file type */
	printf("Type:                              ");
	switch (header->e_type) {
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
	}

	/* Print entry point address */
	printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
	const char *elf_filename;
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 98; /* Return error code 98 if incorrect arguments */
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);

	if (fd == -1) {
		perror("Error opening file");
		return 98; /* Return error code 98 if file opening fails */
	}

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
		fprintf(stderr, "Error: Not an ELF file.\n");
		close(fd);
		return 98; /* Return error code 98 if the file is not an ELF file */
	}

	/* Print the ELF header information */
	print_elf_header(&header);
	close(fd);
	return 0; /* Return success code 0 */
}

