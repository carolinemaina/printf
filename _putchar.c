#include "main.h"
/**
 * _putchar - writes character to te stdout
 * @c: character to be outputted
 *
 * Return: 1 Success
 * on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
