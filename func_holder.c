#include <stdio.h>
#include "main.h"
#include <stdarg.h>


/**
 * char_print - print a character
 * @arg: va_list argument
 * @buff: string pointer
 * @i: index int string
 * Return: new index
 */
int char_print(va_list arg, char *buff, int i)
{
	char c = va_arg(arg, int);

	i = buffChecker(buff, i);
	buff[i] = c;
	i++;
	return (i);
}

/**
 * string_print - print a character
 * @arg: va_list argument
 * @buff: string pointer
 * @i: index int string
 * Return: new index
 */
int string_print(va_list arg, char *buff, int i)
{
	char *str = va_arg(arg, char *);

	i = _strcpy(buff, str, i);
	return (i);
}
