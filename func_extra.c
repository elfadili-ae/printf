#include "main.h"

/**
 * _strcpy - print every other character of a string
 *@src: pointer to a string to copy
 *@dest: pointer destination
 *@i: index
 *Return: new index
 */
int _strcpy(char *dest, char *src, int i)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		i = buffChecker(dest, i);
		dest[i] = src[j];
		i++;
	}
	return (i);
}

/**
 * print_num - print a number
 * @n: number to print
 * Return: number of digits printed
 */
int print_num(int n)
{
	int i = 0;

	if (n / 10)
	{
		i += print_num(n / 10);
		i += _putchar((n % 10) + '0');
	}
	else
		i += _putchar((n % 10) + '0');
	return (i);
}
