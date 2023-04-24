#ifndef PRINTF
#define PRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_type - name of the structure
 * @ch : character type of specifier
 * @print : print function
*/

typedef struct print_type
{
	char ch;
	int (*print)(va_list lust);
} printtype;

int put_ch(char c);
int _printf(const char *format, ...);
int print_string(va_list lust);
int print_char(va_list lust);
int print_percent(va_list lust);
int getfunc (char c, va_list lust);
int test_c (char c);
int print_number(int num);
#endif
