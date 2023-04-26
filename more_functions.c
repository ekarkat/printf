#include "main.h"

/**
 * dec_to_binary - Convert a decimal integer to binary
 *
 * @num: The decimal integer to be converted
 *
 * Return: A string containing the binary representation of the input integer
 */
char *dec_to_binary(unsigned int num)
{
	char *binary = NULL;
	int index = 0;

	/* Allocate memory for the binary string */
	binary = malloc(sizeof(char) * 33);
	if (binary == NULL)
		return (NULL);

	/* Special case for input value 0 */
	if (num == 0)
	{
		binary[0] = '0';
		binary[1] = '\0';
		return (binary);
	}

	/* Convert decimal to binary */
	while (num > 0)
	{
		binary[index++] = (num % 2 == 0) ? '0' : '1';
		num /= 2;
	}
	binary[index] = '\0';

	/* Reverse the string */
	reverse_string(binary);

	return (binary);

}


/**
 * put_unsi - print unsigned number
 *
 * @n: The decimal integer to be converted
 *
 * Return: A string containing the binary representation of the input integer
 */

int put_unsi(unsigned int n)
{
	int ln = 0;
	unsigned int num;

	num = n;
	if (num / 10)
		ln += put_num(num / 10);

	put_ch(num % 10 + '0');
	ln++;

	return (ln);
}

/**
 * put_octal - print number in octal format
 * @num : number
 * Return: lenght of the number
*/

int put_octal(int num)
{
	int len = 0;

	if (num < 0)
	{
		put_ch('-');
		num = -num;
		len++;
	}
	if (num >= 8)
	{
		len += put_octal(num / 8);
	}
	put_ch((num % 8) + '0');
	len++;
	return (len);
}

/**
 * put_hex - Prints a number in hexadecimal form
 *
 * @num: The number to print
 *
 * Return: The length of the printed number
 */
int put_hex(int num)
{
	int len = 0, digit;

	if (num < 0)
	{
		put_ch('-');
		num = -num;
		len++;
	}

	if (num >= 16)
		len += put_hex(num / 16);

	digit = num % 16;

	if (digit < 10)
		put_ch(digit + '0');
	else
		put_ch(digit - 10 + 'a');

	len++;
	return (len);
}

/**
 * put_hexx - Prints a number in hexadecimal form
 *
 * @num: The number to print
 *
 * Return: The length of the printed number
 */
int put_hexx(int num)
{
	int len = 0, digit;

	if (num < 0)
	{
		put_ch('-');
		num = -num;
		len++;
	}

	if (num >= 16)
		len += put_hex(num / 16);

	digit = num % 16;

	if (digit < 10)
		put_ch(digit + '0');
	else
		put_ch(digit - 10 + 'A');

	len++;
	return (len);
}
