#include "main.h"

/**
 * print_string - print a  string
 *
 * @s: input string
 *
 * Return:  char printed
 */
unsigned int print_string(char *s)
{
	unsigned int i, printed_char = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		printed_char++;
	}
	  if (s == NULL)
        {
                return (print_string("(null)"));
        }

	return (printed_char);
}

/**
 * print_integer - prints an integer
 * @num: intut int
 *
 * Return: nbr of chart printed
 */

unsigned int print_integer(int num)
{
	unsigned int i = 0, printed_char = 0, n;
	char *digits = (char *)malloc(sizeof(char));

	if (digits == NULL)
		return (-1);

	if (num < 0)
	{
		_putchar('-');
		printed_char++;
		n = num * (-1);
	}
	else
		n = num;
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		digits[i++] = n % 10 + '0';
		digits = (char *)_realloc(digits, i, i + 1);
		n = n / 10;
	}
	while (i > 0)
	{
		_putchar(digits[--i]);
		printed_char++;
	}
	free(digits);
	return (printed_char);
}
/**
 * _realloc - reallocates a memory  using malloc & free
 *
 * @ptr: pointer
 * @old_size: an integer
 * @new_size: an integer
 *
 * Return: new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, tp = new_size;
	if (ptr == NULL)
		return (malloc(new_size));
	if (old_size == new_size)
		return (ptr);
	if (new_size > old_size)
		tp = old_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);

	for (i = 0; i < tp; i++)
	{
		p[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}

