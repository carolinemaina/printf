#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int _printf(const char *format, ...);
int print_out(char ch);
int strleng(char *s);
char *strcopy(char *dest, char *src);
int print_percent(const char *percent, ...);

#endif
