#include "main.h"

/**
 * octal_print - print number in octal (8 base)
 * @arg: argument
 * @flag: flags holder
 * @length: length specifier
 * Return: digit counter
 */
int octal_print(va_list arg, flag_t *flag, int length)
{
	int i = 0, digit = 0, j = 0, k;
	unsigned long int num = va_arg(arg, unsigned long int);

	num = lengthConverter(num, length);
	digit = base_converter(num, 8, -1, 0);

	if (flag->hflag == 1 && num != 0)
	{
		i += _putchar('0');
		digit++;
	}
	if (num == 0)
	{
		i += _putchar('0');
		digit++;
	}
	if (flag->zflag == 1 && !flag->mflag)
	{
		j = flag->zpadder - digit;
		for (k = 0; k < j; k++)
			i += _putchar('0');
	}
	i += base_converter(num, 8, -1, 1);
	if (flag->mflag == 1)
	{
		j = flag->zpadder - digit;
		for (k = 0; k < j; k++)
			i += _putchar(' ');
	}
	flagReset(flag);
	return (i);
}

/**
 * hexa_print - print number in hexadecimal (16 base)
 * @arg: argument
 * @flag: flags holder
 * @length: length specifier
 * Return: digit counter
 */
int hexa_print(va_list arg, flag_t *flag, int length)
{
	int i = 0, j = 0, digit = 0, k;
	unsigned long int num = va_arg(arg, unsigned long int);

	num = lengthConverter(num, length);
	digit = hexa_convert(num, -1, 0);
	if (flag->hflag == 1 && num != 0)
	{
		i += _puts("0x");
		digit += 2;
	}
	if (num == 0)
	{
		i += _putchar('0');
		digit++;
	}
	if (flag->zflag == 1 && !flag->mflag)
	{
		j = flag->zpadder - digit;
		for (k = 0; k < j; k++)
			i += _putchar('0');
	}
	i += hexa_convert(num, 0, 1);
	if (flag->mflag == 1)
	{
		j = flag->zpadder - digit;
		for (k = 0; k < j; k++)
			i += _putchar(' ');
	}
	flagReset(flag);
	return (i);
}
/**
 * upHexa_print - print number in hexa uppercase (16 base)
 * @arg: argument
 * @flag: flags holder
 * @length: length specifier
 * Return: digit counter
 */
int upHexa_print(va_list arg, flag_t *flag, int length)
{
	int i = 0, j = 0, digit = 0, k;
	unsigned long int num = va_arg(arg, unsigned long int);

	num = lengthConverter(num, length);
	digit = hexa_convert(num, 1, 0);
	if (flag->hflag == 1 && num != 0)
	{
		i += _puts("0X");
		digit += 2;
	}
	if (num == 0)
	{
		i += _putchar('0');
		digit++;
	}
	if (flag->zflag == 1 && !flag->mflag)
	{
		j = flag->zpadder - digit;
		for (k = 0; k < j; k++)
			i += _putchar('0');
	}
	i += hexa_convert(num, 1, 1);
	if (flag->mflag == 1)
	{
		j = flag->zpadder - digit;
		for (k = 0; k < j; k++)
			i += _putchar(' ');
	}
	flagReset(flag);
	return (i);
}
/**
  * binary_print - print number in binary (2 base)
  * @arg: argument
  * @flag: flags holder
  * @length: length specifier
  * Return: digit counter
  */
int binary_print(va_list arg, flag_t *flag, int length)
{
	int i = 0;
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
		i += _putchar('0');

	i += base_converter(num, 2, -1, 1);

	(void)flag;
	(void)length;
	return (i);
}
