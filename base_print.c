#include "main.h"

/**
 * octal_print - print number in octal (8 base)
 * @arg: argument
 * @flag: flags holder
 * Return: digit counter
 */
int octal_print(va_list arg, flag_t *flag)
{
	int i = 0;
	unsigned int num = va_arg(arg, unsigned int);

	if (num != 0)
	{
		if (flag->hflag == 1)
		{
			i += _putchar('0');
			flag->hflag = 0;
		}
		i += base_converter(num, 8, -1, 0);
	}
	else
		i += _putchar('0');
	return (i);
}

/**
 * hexa_print - print number in hexadecimal (16 base)
 * @arg: argument
 * @flag: flags holder
 * Return: digit counter
 */
int hexa_print(va_list arg, flag_t *flag)
{
	int i = 0;
	unsigned int num = va_arg(arg, unsigned int);

	if (num != 0)
	{
		if (flag->hflag == 1)
		{
			i += _puts("0x");
			flag->hflag = 0;
		}
		i += base_converter(num, 16, 0, 1);
	}
	else
		i += _putchar('0');

	return (i);
}
/**
 * upHexa_print - print number in hexa uppercase (16 base)
 * @arg: argument
 * @flag: flags holder
 * Return: digit counter
 */
int upHexa_print(va_list arg, flag_t *flag)
{
	int i = 0;
	unsigned int num = va_arg(arg, unsigned int);

	if (num != 0)
	{
		if (flag->hflag == 1)
		{
			i += _puts("0X");
			flag->hflag = 0;
		}
		i += base_converter(num, 16, 1, 1);
	}
	else
		i += _putchar('0');

	return (i);
}
/**
  * binary_print - print number in binary (2 base)
  * @arg: argument
  * @flag: flags holder
  * Return: digit counter
  */
int binary_print(va_list arg, flag_t *flag)
{
	int i = 0;
	unsigned int num = va_arg(arg, unsigned int);

	if (num != 0)
		i += base_converter(num, 2, -1, 0);
	else
		i += _putchar('0');

	(void)flag;
	return (i);
}
