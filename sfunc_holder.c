#include "main.h"

/**
 * pointer_print - print the adres of the pointer variable
 * @arg: argument that holds the adress
 * @flag: flags holder
 * Return: the number of characters printed
 */
int pointer_print(va_list arg, flag_t *flag)
{
	int c = 0;
	unsigned long int addr = va_arg(arg, unsigned long int);
	char *nil = "(nil)";


	if (hexa_convert(addr, 0, 0) == 0)
		while (nil[c])
			c += _putchar(nil[c]);
	else
	{
		c += _putchar('0');
		c += _putchar('x');
		c += base_converter(addr, 16, 0, 1);
	}

	(void)flag;
	return (c);
}
/**
 * print_rev - Print a string in reverse
 * @arg: va_list argument
 * @flag: void
 * Return: character count
 */
int print_rev(va_list arg, flag_t *flag)
{
	char *s;
	int length = 0;
	int r, c = 0;

	s = va_arg(arg, char *);
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (r = length; r > 0; r--)
	{
		c += _putchar(*s);
		s--;
	}
	(void)flag;
	return (c);
}
/**
 * rot13 - encode a string by using rot13
 * @arg: va_list argument
 * @flag: unused
 * Return: character count
 */
int rot13(va_list arg, flag_t *flag)
{
	char *s = va_arg(arg, char *), n[] = "(null)";
	int i, j, c = 0;
	char a[] = "abcdefghijklmnopqrstuvwxyzABDCEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOQPRSTUVWXYZABCDEFGHIJKLM";

	if (!s)
	{
		for (; n[c]; c++)
			_putchar(s[c]);
		return (c);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			for (j = 0; a[j] != '\0'; j++)
			{
				if (s[i] == a[j])
				{
					c += _putchar(r[j]);
					break;
				}
			}
		} else
			c += _putchar(s[i]);
	}
	(void)flag;
	return (c);
}
