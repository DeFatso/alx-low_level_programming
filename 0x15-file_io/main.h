#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_file(const char *file_name, int flags, mode_t mode);
void copy_file(int fd_from, int fd_to);
void close_file(int fd);
int main(int argc, char *argv[]);

#endif
