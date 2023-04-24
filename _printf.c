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
	int i = 0, ln = 0, n = 0;

	va_start(lust, format);

	while (format[i] != '\0')
	{
		if (format == NULL)
			return (-1);

		if (format[i] == '%' && (test_c(format[i + 1]) == 1))
		{
			n += getfunc(format[i + 1], lust);
			i++;
		}
		else
		{
			put_ch(format[i]);
			ln++;
		}

		i++;
	}

	va_end(lust);

	return (ln + n);
}
