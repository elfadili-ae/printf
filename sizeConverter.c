#include "main.h"

/**
 * lConverter - convert long number's type
 * @num: number to convert
 * @length: type to change to
 * Return: number converted
 */
long int lConverter(long int num, int length)
{
	if (length == 1)
		return (num);
	else if (length == 2)
		return ((short) num);
	else
		return ((int) num);
}

/**
 * luConverter - convert unsigned long number's type
 * @num: number to convert
 * @length: type to change to
 * Return: number converted
 */
long int luConverter(unsigned long int num, int length)
{
	if (length == 1)
		return (num);
	else if (length == 2)
		return ((unsigned short) num);
	else
		return ((unsigned int) num);
}
