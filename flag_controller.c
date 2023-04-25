#include "main.h"

/**
 * flagIt - ignore format flag fields
 * @s: pointer to buffer
 * @i: index in the buffer
 * @flag: flag holder
 * Return: 1 (flag) 0 (not flag)
 */
int flagIt(const char *s, int i, flag_t *flag)
{
	if (s[i] == ' ')
		flag->sflag = 1;

	if (s[i] == '+')
		flag->pflag = 1;

	if (s[i] == '#')
		flag->hflag = 1;
	else
		return (0);
	return (1);
}
