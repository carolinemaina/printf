#include "main.h"

/**
 * strleng - returns length of a string
 * @s: given string
 * Return: length
 */

int strleng(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
