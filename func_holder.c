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
/**
 * int_print - print integer
 * @arg: va_list argument
 * @buff: string pointer
 * @i: index in string
 * Return: new index
 */
/*int int_print(va_list arg, char *buff, int i)
{
	int num = va_arg(arg, int);

	if (num < 0)
	{
		num *= -1;
		i = buffChecker(buff, i);
		buff[i] = '-';
		i++;
	}
	if (a == 0)
	{
		i = buffChecker(buff, i);
		buff[i] = '0';
		i++;
	}
	while (num > 0)
	{
		tmp = tmp * 10 + (num % 10);
		num /= 10;
	}
	while (tmp % 10 > 0)
	{
		i = buffChecker(buff, i);
		buff[i] = (tmp % 10) + '0';
		tmp /= 10;
		i++;
	}
	return (i);
	}*/
