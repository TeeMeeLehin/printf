#include "main.h"

/**
 * _printf - Prints a formatted string to the standard output.
 * @format: A pointer to a string of characters to be printed.
 *
 * Return: The number of characters printed (excluding the null byte used to
 *         end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	char *str;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == d || *format == 'i')
			{
				printed_chars += print_integer(args);
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				printed_char += 2;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}

		format++;
	}

	va_end(args);

	return (printed_chars);
}

/**
 * print_integer - Prints an integer to the standard output.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_integer(va_list args)
{
	int num = va_args(args, int);
	int digits = 0;
	int divisor = 1;
	int printed_chars = 0;

	if (num < 0)
	{
		_putchar('-');
		printed_chars++;
		num = -num;
	}

	while ((num / divisor) > 9)
	{
		divisor = *10;
	}

	while (divisor != 0)
	{
		digits = (num / divisor) % 10;
		_putchar(digits + '0');
		printed_chars++;
		divisor /= 10;
	}

	return (printed_chars);
}
