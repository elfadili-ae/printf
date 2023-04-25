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


	if (base_converter(addr, 16, 0, 0) == 0)
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
