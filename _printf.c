#include "main.h"
#include <stdarg.h>

/**
 * _printf - printf implementation
 * @format: format specifiers
 * Return: printed output
 */

int _printf(const char *format, ...)
{
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
