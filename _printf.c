#include <stdio.h>
#include <unistd.h>
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
	unsigned int i, j, Count = 0;
	char buff[1024];
	func_t _funcs[] = {
		{'c', char_print},
		{'s', string_print},
		{'\0', NULL}
	};
	int (*fun)(va_list, char *, int);

	va_start(arguments, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				buff[Count] = '%';
				i += 2;
				Count++;
			}
			for (j = 0; _funcs[j].spec != '\0'; j++) {
				if (_funcs[j].spec == format[i + 1])
				{
					fun = _funcs[j].f;
					i++;
					Count = fun(arguments, buff, Count);
					break;
				}
			}
		}
		else {
			buff[Count] = format[i];
			Count++;
		}
	}
	va_end(arguments);
	write(1, buff, Count);
	return (Count);
}
