#include <unistd.h>

/**
 * _putchar - add and then print the buffer to stdout
 * the buffer is controlled by the size of 1024
 * @c: The character to print
 * Return: 1 (success)
 */
int _putchar(char c)
{
	static int index;
	static char buff[1024];

	if (c == -1 || index >= 1024)
	{
		write(1, buff, index);
		index = 0;
		return (0);
	}
	if (c != -1)
		buff[index] = c;
	index++;
	return (1);
}
