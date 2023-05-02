#include "main.h"

/**
 * getLength -check for length specifiers
 * @s: pointer to buffer
 * @i: index in the buffer
 * Return: 1 (l spec) 2 (h spec) 0 (non)
 */
int getLength(const char *s, unsigned int *i)
{
	int index = *i + 1, len = 0;

	switch (s[index])
	{
	case 'l':
		len = 1;
		break;
	case 'h':
		len = 2;
		break;
	default:
		*i = index - 1;
		break;
	}
	return (len);
}
