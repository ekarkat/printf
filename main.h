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

extern const struct print_type print_fc[15];

int str_ln(const char *str);
void reverse_string(char *str);
int print_unsint(va_list lust);
int put_unsi(unsigned int n);
int print_octal(va_list lust);
int put_octal(int num);
int print_hex(va_list lust);
int put_hex(int num);
int print_hexx(va_list lust);
int put_hexx(int num);
int print_str(char *str);
int print_rev_string(va_list lust);
int print_binary(va_list lust);
char *dec_to_binary(unsigned int num);
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
