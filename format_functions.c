#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_char - print character
* @lust : list argument
* Return: return a number
*/
int print_char(va_list lust)
{
	char c;

	c = va_arg(lust, int);
	put_ch(c);
	return (1);
}

/**
* print_string - print character
* @lust : list argument
* Return: return number of characters
*/

int print_string(va_list lust)
{
	int i = 0;
	char *str = va_arg(lust, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		put_ch(str[i]);
		i++;
	}
	return (i);

}

/**
* print_percent - print character
* @lust : list argument
* Return: return number of characters
*/

int print_percent(__attribute__((unused))va_list lust)
{
	char c;

	c = '%';
	put_ch(c);
	return (1);
}

/**
* print_number - print number
* @lust : list argument
* Return: return lenght
*/
int print_number(int num)
{
	int ln = 0;

	if (num < 0)
	{
		put_ch('-');
		num = -num;
		ln++;
	}
	if (num / 10)
		ln += print_number(num / 10);
	put_ch(num % 10 + '0');
	ln++;
	return (ln);
}
