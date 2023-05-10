#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_files(int fd1, int fd2);
void open_files(const char *file_from, const char *file_to, int *fd1, int *fd2);
void cp_(int fd1, int fd2);
#endif
