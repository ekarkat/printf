#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
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
 * print_number - Print an integer argument passed through va_list
 *
 * @lust: The va_list containing the integer argument
 *
 * Return: The number of characters printed
 */
int print_number(va_list lust)
{
	int ln = 0;
	int num = va_arg(lust, int);

	if (num == INT_MIN)
	{
		put_num('-');
		put_num('2');
		put_num(147483648);
		ln += 2;
		return (ln);
	}
	ln = put_num(num);

	return (ln);
}
