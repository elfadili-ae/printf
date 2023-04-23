#include <stdio.h>
#include "main.h"
#include <stdarg.h>


/**
 * char_print - print a character
 * @arg: va_list argument
 * Return: new index
 */
int char_print(va_list arg)
{
	char c = va_arg(arg, int);

	return (_putchar(c));
}

/**
 * string_print - print a character
 * @arg: va_list argument
 * Return: new index
 */
int string_print(va_list arg)
{
	char *str;
	int y, c = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	for (y = 0; str[y] != '\0'; y++)
	{
		c += _putchar(str[y]);
	}

	return (c);
}
/**
 * int_print - print integer
 * @arg: va_list argument
 * Return: printed char count
 */
int int_print(va_list arg)
{
	int i = 0, num = va_arg(arg, int);

	if (num < 0)
	{
		num *= -1;
		i += _putchar('-');
	}
	if (num == 0)
		i += _putchar('0');

	else if (num > 0)
	{
		i += print_num(num);
	}
	return (i);
}
