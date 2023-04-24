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
	unsigned int tmp;

	if (num < 0)
	{
		i += _putchar('-');
		tmp = -num;
	}
	else
		tmp = num;

	i += print_num(tmp);
	return (i);
}
/**
 * unsigned_print - print unsigned integer
 * @arg: va_list argument
 * Return: printed char count
 */
int unsigned_print(va_list arg)
{
	int i = 0;
	unsigned int num = va_arg(arg, unsigned int);

	i += print_num(num);
	return (i);
}
/**
  * bigS - print string
  * and change special ASCII char to \x
  * @arg: va_list argument
  * Return: printed char count
  */
int bigS_print(va_list arg)
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
                        if (base_converter(str[y], 16, 1, 0) == 1)
                        {
                                _putchar(0 + '0');
                                base_converter(str[y], 16, 1, 1);
                        }
                        else
                                base_converter(str[y], 16, 1, 1);
                }
        }
        return (c);
}
