#include "main.h"

/**
  * base_converter - convert decimal to other bases
  * @num: Number to convert
  * @base: base to convert to
  * Return: digits printed
  */
int base_converter(unsigned long int num, int base)
{
	int r = 0;
	int i = 0;

	switch (base)
	{
		case 2:
			if (num > 0)
			{
				i += base_converter(num / 2, 2);
				r = num % 2;
				i += _putchar(r + '0');
			}
			break;
		case 8:
			if (num > 0)
			{
				i += base_converter(num / 8, 8);
				r = num % 8;
				i += _putchar(r + '0');
			}
			break;
		case 16:
			break;
	}
	return (i);
}
