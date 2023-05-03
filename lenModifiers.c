#include "main.h"

/**
 * getLength -check for length specifiers
 * @s: pointer to buffer
 * @i: index in the buffer
 * Return: 1 (l spec) 2 (h spec) 0 (non)
 */
int getLength(const char *s, unsigned int *i)
{
	int len = 0;

	if (s[*i] == 'l')
		len = 1;
	else if (s[*i] == 'h')
		len = 2;

	if (len != 0)
		*i++;

	return (len);
}
