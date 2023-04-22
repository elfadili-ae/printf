#include <stdio.h>
#include "main.h"
#include <stdarg.h>


/**
 * char_print - print a character
 * @arg: va_list argument
 * @i: index int string
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
 * @i: index int string
 * Return: new index
 */
int string_print(va_list arg)
{
	char *str = va_arg(arg, char *);
	int y, c = 0;

	for (y = 0; str[y] != '\0'; y++)
	{
		c += _putchar(str[y]);
	}
	_putchar('\0');

	return (c);
}
