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
	else if (s[i] == '0' && flag->zflag == 0)
	{
		flag->zflag = 1;
	} else if (flag->zflag == 1 && s[i] <= '9' && s[i] >= '0')
	{
		flag->zpadder = flag->zpadder * 10 + _atoi(s[i]);
	}
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
	if (flag->sflag != 0 || flag->pflag != 0 || flag->hflag != 0 ||
		flag->zflag != 0)
		return (0);
	return (1);
}
/**
  * flagReset - Reset the flag
  * @flag: flag var
  */
void flagReset(flag_t *flag)
{
	flag->sflag = 0;
	flag->pflag = 0;
	flag->hflag = 0;
	flag->zflag = 0;
}
