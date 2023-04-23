#include "main.h"

/**
 * octal_print - print number in octal (8 base)
 * @arg: argument
 * Return: digit counter
 */
int octal_print(__attribute__((unused)) va_list arg)
{
	int i = 0;

	return (i);
}

/**
 * hexa_print - print number in hexadecimal (16 base)
 * @arg: argument
 * Return: digit counter
 */
int hexa_print(__attribute__((unused)) va_list arg)
{
	int i = 0;

	return (i);
}
/**
 * upHexa_print - print number in hexa uppercase (16 base)
 * @arg: argument
 * Return: digit counter
 */
int upHexa_print(__attribute__((unused)) va_list arg)
{
	int i = 0;

	return (i);
}
/**
  * binary_print - print number in binary (2 base)
  * @arg: argument
  * Return: digit counter
  */
int binary_print(va_list arg)
{
	int i = 0;
	unsigned int num = va_arg(arg, unsigned int);

	if (num != 0)
		i += base_converter(num, 2);
	else
		i += _putchar('0');

	return (i);
}
