#include <stdio.h>
#include "main.h"
#include <stdarg.h>


/**
 * char_print - print a character
 * @arg: va_list argument
 * @i: index int string
 * Return: new index
 */
int char_print(va_list arg, int i)
{
	char c = va_arg(arg, int);

	_putchar(c);
	i++;
	return (i);
}

/**
 * string_print - print a character
 * @arg: va_list argument
 * @i: index int string
 * Return: new index
 */
int string_print(va_list arg, int i)
{
	char *str = va_arg(arg, char *);
	int y;

	for (y = 0; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
		i++;
	}

	return (i);
}
