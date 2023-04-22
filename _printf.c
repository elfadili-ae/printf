#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_fun - get the corresponding function for the specifier
 * @c: specifier
 * Return: Function
 */
int (*get_fun(char c))(va_list, int)
{
	int j;
	func_t _funcs[] = {
		{'c', char_print},
		{'s', string_print},
		{'\0', NULL}
	};

	for (j = 0; _funcs[j].spec != '\0'; j++)
	{
		if (_funcs[j].spec == c)
			return (_funcs[j].f);
	}
	return (0);
}
/**
 * _printf - similar function to printf
 * @format: text to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int i, Count = 0;
	int (*fun)(va_list, int);

	va_start(arguments, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				Count++;
			}
			else if (get_fun(format[i + 1]))
			{
				fun = get_fun(format[i + 1]);
				Count = fun(arguments, Count);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			Count++;
		}

	}
	va_end(arguments);
	_putchar('\n');
	return (Count);
}
