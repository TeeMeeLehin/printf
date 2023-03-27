#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	for (; , *format; format++)
	{
		if (*format == '%')
		{
			switch (*++format)
			{
				case 'd':
				case 'i':
				count += printf("%d", va_arg(args, int));
				break;
				default:
				putchar('%');
				pucthar(*format);
				count = +2;
				break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
	}
	va_end(args);

	return count;
}

int main(void)
{
	int num = 54321;

	_printf("The number is %d.\n", num);
	return 0;
}
