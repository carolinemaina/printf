#include "main.h"

/**
 * handle_s - handles 's' specifier
 * @store: store output for ptinting
 * @str: pointer
 * Return: string
 */

int handle_s(char *store, const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		store[len] = str[len];
		len++;
	}
	return (len);
}
