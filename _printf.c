#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_fun - get the corresponding function for the specifier
 * @c: specifier
 * Return: Function
 */
int (*get_fun(char c))(va_list)
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
	int (*fun)(va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	va_start(arguments, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				Count += _putchar(format[i]);
			i = flagIt(format, i);

			fun = get_fun(format[i]);
			if (fun)
				Count += fun(arguments);
			else
			{
				Count += _putchar('%');
				Count += _putchar(format[i]);
			}
		} else
			Count += _putchar(format[i]);
	}

	va_end(arguments);
	return (Count);
}
