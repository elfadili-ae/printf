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
	}
	if (c != -1)
	{
		buff[index] = c;
		index++;
	}
	return (1);
}
/**
 * _puts - print a string
 * @s: string to print
 * Return: printed char count
 */
int _puts(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c += _putchar(s[c]);
	}
	return (c);
}
