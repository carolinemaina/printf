#include "main.h"
 

/**
 * _printf - prints different types of arguements
 * @format: initial string that tells us what is to be printed
 *
 * Return:the no of times we write to stdout
=======
#include <stdarg.h>

/**
 * _printf - printf implementation
 * @format: format specifiers
 * Return: printed output

 */

int _printf(const char *format, ...)
{

	unsigned int i, print_char = 0;

	va_list args;

	if (format == NULL)
		return(-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0' )
				return (-1);
			print_char += printf_format(args, format, &i);

		}
		else
		{
			_putchar(format[i]);
			print_char++;
		}
	}
	va_end(args);
	return(print_char);
		
}

/**
 * printf_format - outputs different arguements
 * @i: int
 * @args: the va_list inputted
 *
 * Return: chracters to be printed
 */

int printf_format(va_list args, const char *format, unsigned int *i)
{
	unsigned int print_char;

	switch (format[*i + 1])
	{
		case 'c':
			print_char += _putchar(va_arg(args, int));
			break;
		case 's':
			print_char += _putchar(va_arg(args, char *));
			break;
		case '%':
			_putchar('%');
			print_char++;
			*i--;
		case 'd':
		case 'i':
			print_char += print_integer(va_arg(args, int));
			break;
		default:
			_putchar(format[*i]);
			print_char++;
			*i -= 1;
			;
	}
	*i += 1;
	return(print_char);

	va_list character;
	int s1 = 0, s2 = 0, i;
	char store[1000], *ptr_string;

	va_start(character, format);
	if (format && format[s1] != '\0')
	{
		if (format[s1] == '%')
		{
			s1++;
			switch (format[s1])
			{
				case 'c':
					{
						store[s2] = (char)va_arg(character, int);
						s2++;
						break;
					}
				case 's':
					{
						ptr_string = va_arg(character, char*);
						strcopy(&store[s2], ptr_string);
						s2 += strleng(ptr_string);
						break;
					}
			}
		} else
		{
			return (-1);
		}
		s1++; }
	va_end(character);

	for (i = 0; i < s2; i++)
	{
		print_out(store[i]);
	}
	if (format[s1] == '\n')
		print_out('\n');
	return (s2);

}
