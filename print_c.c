#include "main.h"

/**
 * handle_c - handles 'c' specifier
 * @store: stores character for printing
 * @c: given character
 * Return: 1
 */

int handle_c(char *store, int c)
{
	*store = (char)c;
	return (1);
}
