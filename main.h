#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_out(char ch);
int strleng(char *s);
char *strcopy(char *dest, char *src);
int handle_c(char *store, int c);
int handle_s(char *store, const char *str);

#endif
