#include "main.h"




/**
* _print_char - custom function for single char
* @c: the inpu char
* Return: int
*/
int _print_char(char c)
{
_putchar(c);
return (1);
}
/**
* _print_string - custom function for string
* @s: the inpu string
* Return: int
*/
int _print_string(const char *s)
{
int len = 0;
while (*s)
{
_putchar(*s++);
len++;
}
return (len);
}
/**
* _print_format - format function
* @format: the input format
* @args: other arguments
* Return: int
*/
int _print_format(const char *format, va_list args)
{
const char *p = format;
int count = 0;
while (*p)
{
if (*p == '%')
{
switch (*(++p))
{
case 'c':
count += _print_char(va_arg(args, int));
break;
case 's':
count += _print_string(va_arg(args, const char *));
break;
case '%':
count += _print_char('%');
break;
default:
/* unsupported format specifier, ignore it */
break;
};
}
else
{
count += _print_char(*p);
}
p++;
}
return (count);
}
/**
* _printf - custom printf function
* @format: input string
* Return: int
*/
int _printf(const char *format, ...)
{
int count;
va_list args;
va_start(args, format);
count = _print_format(format, args);
va_end(args);
return (count);
}
