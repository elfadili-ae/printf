#include "main.h"

/**
 * flagIt - ignore format flag fields
 * @s: pointer to buffer
 * @i: index in the buffer
 * Return: new index
 */
int flagIt(const char *s, int i)
{
	while (s[i] == ' ')
	{
		i++;
	}
	return (i);
}
