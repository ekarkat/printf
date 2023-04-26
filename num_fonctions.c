#include "main.h"

/**
 * print_binary - Convert a decimal integer to binary
 *
 * @lust: The decimal integer to be converted
 *
 * Return: A string containing the binary representation of the input integer
*/

int print_binary(va_list lust)
{
	int num = va_arg(lust, int);
	char *str_bin;
	int ln;

	if (num < 1)
		return (-1);
	str_bin = dec_to_binary(num);
	ln = print_str(str_bin);
	return (ln);
}

/**
 * print_unsint - Print unsigned number
 *
 * @lust: The decimal integer to be converted
 *
 * Return: lenght of printed char
*/

int print_unsint(va_list lust)
{
	unsigned int num = va_arg(lust, int);
	int ln;

	ln = put_unsi(num);
	return (ln);
}

/**
 * print_octal - Print octal format of a number
 *
 * @lust: The decimal integer to be converted
 *
 * Return: lenght of printed char
*/
int print_octal(va_list lust)
{
	int num = va_arg(lust, int);
	int ln;

	ln = put_octal(num);
	return (ln);
}

/**
 * print_hex - Print hex format of a number
 *
 * @lust: The decimal integer to be converted
 *
 * Return: lenght of printed char
*/
int print_hex(va_list lust)
{
	int num = va_arg(lust, int);
	int ln;

	ln = put_hex(num);
	return (ln);
}

/**
 * print_hex - Print hex format of a number
 *
 * @lust: The decimal integer to be converted
 *
 * Return: lenght of printed char
*/
int print_hexx(va_list lust)
{
	int num = va_arg(lust, int);
	int ln;

	ln = put_hexx(num);
	return (ln);
}