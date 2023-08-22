#include "main.h"

/**
 * strcopy - copies a string
 * @dest: copy to
 * @src: copy from
 * Return: copied text
 */

char *strcopy(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
