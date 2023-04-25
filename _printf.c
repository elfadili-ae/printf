#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_fun - get the corresponding function for the specifier
 * @c: specifier
 * Return: Function
 */
int (*get_fun(char c))(va_list, flag_t *)
{
	int j;
	func_t _funcs[] = {
		{'c', char_print},
		{'s', string_print},
		{'%', oo7_print},
		{'d', int_print},
		{'i', int_print},
		{'b', binary_print},
		{'u', unsigned_print},
		{'o', octal_print},
		{'x', hexa_print},
		{'X', upHexa_print},
		{'S', bigS_print},
		{'p', pointer_print},
		{'r', print_rev},
		{'R', rot13},
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
	int (*fun)(va_list, flag_t *);
	flag_t flags = {0, 0, 0};

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
			{
				Count += _putchar(format[i]);
				continue;
			}
			while (flagIt(format, i, &flags))
				i++;
			fun = get_fun(format[i]);
			if (fun)
				Count += fun(arguments, &flags);
			else if (flagChecker(&flags))
			{
				Count += _putchar('%');
				Count += _putchar(format[i]);
			}
		} else
			Count += _putchar(format[i]);
	}

	_putchar(-1);
	va_end(arguments);
	return (Count);
}
/**
 * oo7_print - print double-oh-seven
 * @arg: argument
 * @flag: flag holder
 * Return: 1 for printed char
 */
int oo7_print(va_list arg, flag_t *flag)
{
	int c = 0;

	c += _putchar('%');
	flagReset(flag);

	(void)arg;
	return (c);
}
