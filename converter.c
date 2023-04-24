#include "main.h"

/**
 * base_converter - convert decimal to other bases
 * @num: Number to convert
 * @base: base to convert to
 * @_case: Letter case
 * Return: digits printed
 */
int base_converter(unsigned long int num, int base, int _case, int print)
{
	int r = 0, i = 0;
	char hexa[][6] = {"abcdef", "ABCDEF"};

	if (base == 2 || base == 8)
	{
		if (num > 0)
		{
			i += base_converter(num / base, base, _case, print);
			r = num % base;
			i += _putchar(r + '0');
		}
	}
	else if (base == 16)
	{
		if (print == 1)
		{
			if (num > 0)
			{		
				i += base_converter(num / 16, 16, _case, print);
				r = num % 16;
				if (r == 10)
					i += _putchar(hexa[_case][0]);
				else if (r == 11)
					i += _putchar(hexa[_case][1]);
				else if (r == 12)
					i += _putchar(hexa[_case][2]);
				else if (r == 13)
					i += _putchar(hexa[_case][3]);
				else if (r == 14)
					i += _putchar(hexa[_case][4]);
				else if (r == 15)
					i += _putchar(hexa[_case][5]);
				else
					i += _putchar(r + '0');
			}
		} else
			for (; num != 0; i++)
				num /= 16;
	} return (i);
}
