#include "main.h"

/**
  * _puts - Print a string
  * @str: the string to print
  * Return: character printed number
  */

int _puts(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		_putchar(*str++);
		counter++;
	}

	return (counter);
}
