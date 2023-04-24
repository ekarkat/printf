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
printtype print_fc[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{0, NULL}
};
	va_list lust;
	int i = 0, ln = 0, j = 0;

	va_start(lust, format);
	while (format[i] != '\0')
	{
		if (format == NULL)
			return (0);
		if (format[i] == '%')
		{
			j = 0;
			while (print_fc[j].ch != 0)
			{
				if (format[i + 1] == print_fc[j].ch)
				{
					ln = ln + print_fc[j].print(lust) - 1;
					i++;
					break;
				}
				j++;
			}
			if (print_fc[j].ch == 0)
				put_ch(format[i]);
			ln++;
		}
		else
		{
			put_ch(format[i]);
			ln++;
		}
		i++;
	}
	va_end(lust);
	return (ln);
}
