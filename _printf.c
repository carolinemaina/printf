#include "main.h"

/**
 * _printf - printf implementation
 * @format: format specifiers
 * Return: printed output
 */
int _printf(const char *format, ...)
{
	va_list character;
	int s1 = 0, i;
	char store[1000];

	va_start(character, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					s1 += handle_c(&store[s1], va_arg(character, int));
					break;
				case 's':
					s1 += handle_s(&store[s1], va_arg(character, const char *));
					break;
				case '%':
					store[s1++] = '%';
					break;
				default:
					return (-1);
			}
		} else if (format[i] == '\n')
		{
			store[s1++] = '\n';
		} else
		{
			store[s1++] = format[i];
		}
	}
	va_end(character);

	for (i = 0; i < s1; i++)
	{
		print_out(store[i]);
	}

	return (s1);
}
