#include <stdio.h>
#include "main.h"
#include <stdarg.h>


/**
 * char_print - print a character
 * @arg: va_list argument
 * @flag: flags holder
 * Return: new index
 */
int char_print(va_list arg, flag_t *flag)
{
	char c = va_arg(arg, int);

	(void)flag;
	return (_putchar(c));
}

/**
 * string_print - print a character
 * @arg: va_list argument
 * @flag: flags holder
 * Return: new index
 */
int string_print(va_list arg, flag_t *flag)
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

	(void) flag;
	return (c);
}
/**
 * int_print - print integer
 * @arg: va_list argument
 * @flag: flags holder
 * Return: printed char count
 */
int int_print(va_list arg, flag_t *flag)
{
	int i = 0, j, digit, isNegative = 0, num = va_arg(arg, int);

	if (num < 0)
	{
		i += _putchar('-');
		num = -num;
		isNegative = 1;
		digit = countDigit(num, 1);
	}
	else
		digit = countDigit(num, 0);

	if (flag->pflag == 1 && !isNegative)
	{
		i += _putchar('+');
		flagReset(flag);
	}
	else if (flag->sflag == 1)
	{
		i += _putchar(' ');
		flagReset(flag);
	}
	if (flag->zflag == 1)
	{
		j = flag->zpadder - digit;
		while (j > 0)
		{
			i += _putchar('0');
			j--;
		}
	}
	i += print_num(num);

	return (i);
}
/**
 * unsigned_print - print unsigned integer
 * @arg: va_list argument
 * @flag: flags holder
 * Return: printed char count
 */
int unsigned_print(va_list arg, flag_t *flag)
{
	int i = 0, j, digit;
	unsigned int num = va_arg(arg, unsigned int);

	digit = countDigit(num, 0);
	if (flag->zflag == 1)
	{
		j = flag->zpadder - digit;
		while (j > 0)
		{
			i += _putchar('0');
			j--;
		}
	}
	i += print_num(num);

	(void)flag;
	return (i);
}
/**
 * bigS_print - print string
 * and change special ASCII char to \x
 * @arg: va_list argument
 * @flag: flags holder
 * Return: printed char count
 */
int bigS_print(va_list arg, flag_t *flag)
{
	char *str;
	int y, c = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	for (y = 0; str[y] != '\0'; y++)
	{
		if (str[y] >= 32 && str[y] < 127)
			c += _putchar(str[y]);
		else
		{
			c += _putchar('\\');
			c += _putchar('x');
			if (hexa_convert(str[y], 1, 0) == 1)
			{
				c += _putchar('0');
				c += base_converter(str[y], 16, 1, 1);
			} else
				c += base_converter(str[y], 16, 1, 1);
		}
	}
	(void)flag;
	return (c);
}
