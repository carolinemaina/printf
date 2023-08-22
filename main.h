#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int print_string(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
unsigned int print_base(unsigned int n, int base);
unsigned int print_integer(int num);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int printf_format(va_list args, const char *format, unsigned int *i);
#endif
