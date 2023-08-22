#include "main.h"
#include <stdarg.h>

/**
 * print_percent - prints percent
 * @percent: percent specifiers
 * Return: printed output
 */

int print_percent(const char *percent, ...)
{
	va_list character;
	int s1 = 0, s2 = 0, i;
	char store[1000];

	va_start(character, percent);
	if (percent && percent[s1] != '\0')
	{
		if (percent[s1] == '%')
		{
			s1++;
			switch (percent[s1])
			{
				case '%':
					{
						store[s2] = '%';
						s2++;
						break;
					}
			}
		}
		else
		{
			return (-1);
		}
		s1++;
	}
	va_end(character);

	for (i = 0; i < s2; i++)
	{
		print_out(store[i]);
	}
	if (percent[s1] == '\n')
	{
		print_out('\n');
	}
	return (s2);
}
