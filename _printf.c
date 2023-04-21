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
	unsigned int i = 0, charCount = 0;

	va_start(arguments,format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				_putchar(va_arg(arguments, int));
				charCount++;
				break;
			case 's':
				charCount += _puts(va_arg(arguments, char *));
				break;
			default:
				_putchar('%');
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			charCount++;
		}
		i++;
	}
	va_end(arguments);
	return (charCount);
}
