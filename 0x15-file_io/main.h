#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <elf.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void elf_header(const Elf64_Ehdr *header);
void copy_file(const char *file_from, const char *file_to);
void exit_with_error(const char *message, int exit_code);
void print_error(const char *message);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
