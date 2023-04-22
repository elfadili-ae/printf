#include "main.h"

/**
 * buffReset - reset the buffer
 * @buff: buffer to reset
 * @i: size of the buffer
 */
void buffReset(char *buff, int i)
{
	for (; i >= 0; i--)
		buff[i] = '0';
}
/**
 * buffChecker - check if buffer exeeded 1024
 * @buff: buffer to check
 * @i: index in the buffer
 * Return: index
 */
int buffChecker(char *buff, int i)
{
	if (i >= 1024)
	{
		write(1, buff, 1024);
		buffReset(buff, 1024);
		i = 0;
	}

	return (i);
}
