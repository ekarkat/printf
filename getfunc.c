#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

const struct print_type print_fc[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'d', print_number},
	{'i', print_number},
	{'b', print_binary},
	{'u', print_unsint},
	{'o', print_octal},
	{'x', print_hex},
	{'X', print_hexx},
	{'\0', NULL}
};
/**
*getfunc - get the right print function
*@c : the type of conversion s or c or d ...
*@lust : the arguments list
*Return: return number of characters
*/
int getfunc(char c, va_list lust)
{
	int n, j;

	j = 0;
	while (print_fc[j].ch != '\0')
	{
		if (c == print_fc[j].ch)
		{
			n = print_fc[j].print(lust);
			break;
		}

		j++;
	}

	if (print_fc[j].ch == '\0')
	{
		put_ch(c);
		n++;
	}

	return (n);
}
/**
*test_c - test if the next char in format is a valid specifier or not
*@c : char == format[i] in printf function
*Return: 1 if its valid or 0
*/
int test_c(char c)
{
	int j = 0;

	while (print_fc[j].ch != '\0')
	{
		if (c == print_fc[j].ch)
			return (1);

		j++;
	}

	return (0);
}

