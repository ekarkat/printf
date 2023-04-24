#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _printf - implement of printf
 * @format : the format
 * Return: return the number of printed characters
 */

int _printf(const char *format, ...)
{
	va_list lust;
	int i = 0, s1 = 0, count = 0;

	va_start(lust, format);
	while (format[i] != '\0')
	{
		if (format == NULL)
			return (-1);

		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				print_char(lust);
				count++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				s1 = s1 + print_string(lust);
				i++;
			}
			else
			{
				put_ch(format[i]);
				count++;
			}
		}
		else
		{
			put_ch(format[i]);
			count++;
		}
		i++;
	}
	va_end(lust);
	return (count + s1);
}
