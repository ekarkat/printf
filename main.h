#ifndef PRINTF
#define PRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int put_ch(char c);
int _printf(const char *format, ...);
int print_string(va_list lust);
int print_char(va_list lust);

#endif
