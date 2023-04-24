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

	while (str[i] != '\0')
	{
		put_ch(str[i]);
		i++;
	}
	return (i);

}
