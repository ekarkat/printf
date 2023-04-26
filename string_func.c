#include "main.h"

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
