#ifndef MAIN_H
#define MAIN_H
#define buff 1024
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
