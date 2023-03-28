#ifndef MAIN_H
#define MAIN_H




#include <unistd.h>
#include <stdarg.h>
#include <string.h>




int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(char c);
int _print_string(const char *s);
int _print_format(const char *format, va_list args);
int print_integer(va_list args);

#endif
