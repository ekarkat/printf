#ifndef PRINTF
#define PRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
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

extern const struct print_type print_fc[7];

int put_num(int num);
int put_ch(char c);
int _printf(const char *format, ...);
int print_string(va_list lust);
int print_char(va_list lust);
int print_percent(va_list lust);
int getfunc(char c, va_list lust);
int test_c(char c);
int print_number(va_list lust);
#endif
