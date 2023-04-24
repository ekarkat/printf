#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
*getfunc - get the right print function
*@c : the type of conversion s or c or d ...
*@lust : the arguments list
*Return: return number of characters
*/
int getfunc(char c, va_list lust)
{
	int n, j;

	printtype print_fc[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

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
*test_c - test char
*@c : char to test
*Return: 1 or 0
*/
int test_c(char c)
{
	int j = 0;

	printtype print_fc[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	while (print_fc[j].ch != '\0')
	{
		if (c == print_fc[j].ch)
			return (1);

		j++;
	}

	return (0);
}

