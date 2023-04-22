#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - similar function to printf
 * @format: text to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int i, charCount = 0;

	va_start(arguments, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				_putchar(va_arg(arguments, int));
			else if (format[i] == 's')
				charCount += _puts(va_arg(arguments, char *));
			else if (format[i] == 'i' || format[i] == 'd')
				charCount += int_print(va_arg(arguments, int));
			else if (format[i] == '%')
				_putchar('%');
			else
				_putchar(format[--i]);
		}
		else
			_putchar(format[i]);
		charCount++;

	}
	va_end(arguments);
	return (charCount);
}
