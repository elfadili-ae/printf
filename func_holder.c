#include <stdio.h>
#include "main.h"

/**
 * int_print - print integer
 * @a: the numbe to print
 * Return: the count of digits
 */
int int_print(int a)
{
	int tmp = 0, charCounter = 0;

	if (a < 0)
	{
		a *= -1;
		_putchar('-');
	}
	while (a > 0)
	{
		tmp = tmp * 10 + (a % 10);
		a /= 10;
	}
	while (tmp % 10 > 0)
	{
		_putchar((tmp % 10) + '0');
		tmp /= 10;
		charCounter++;
	}
	return (charCounter);
}
