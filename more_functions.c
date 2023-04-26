#include "main.h"

/**
 * str_ln - Reverse a string in place
 *
 * @str: The string to be reversed
 *
 * Return: return lenght
 */
int str_ln(const char *str)
{
	size_t len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * reverse_string - Reverse a string in place
 *
 * @str: The string to be reversed
 */
void reverse_string(char *str)
{
	int start = 0;
	int end = str_ln(str) - 1;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
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
