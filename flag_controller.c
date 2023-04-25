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
	else if (s[i] == '+')
		flag->pflag = 1;
	else if (s[i] == '#')
		flag->hflag = 1;
	else
		return (0);
	return (1);
}
/**
 * flagChecker - check if flags exists
 * @flag: flags holder
 * Return: 1 (no flags) 0 (flags)
 */
int flagChecker(flag_t *flag)
{
	if (flag->sflag != 0 || flag->pflag != 0 || flag->hflag != 0)
		return (0);
	return (1);
}
