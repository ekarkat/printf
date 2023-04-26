#include "main.h"
#include <unistd.h>

/**
 * put_ch - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int put_ch(char c)
{
	return (write(1, &c, 1));
}

/**
 * put_num - Print an integer to stdout
 *
 * @num: The integer to be printed
 *
 * Return: The number of characters printed
 */
int put_num(int num)
{
	int ln = 0;

	if (num < 0)
	{
		put_ch('-');
		num = num * (-1);
		ln++;
	}
	if (num / 10)
		ln += put_num(num / 10);

	put_ch(num % 10 + '0');
	ln++;

	return (ln);
}

/**
 * print_str - Print an integer to stdout
 *
 * @str: The integer to be printed
 *
 * Return: The number of characters printed
 */

int print_str(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		put_ch(str[i]);
		i++;
	}
	return (i);

}
