#include "main.h"

/**
 * print_out - prints to output
 * @ch: given input
 * Return: printed value
 */

int print_out(char ch)
{
	return (write(1, &ch, 1));
}
