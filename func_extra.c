#include "main.h"

/**
 * _strcpy - print every other character of a string
 *@src: pointer to a string to copy
 *@dest: pointer destination
 *@i: index
 *Return: new index
 */
int _strcpy(char *dest, char *src, int i)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		i = buffChecker(dest, i);
		dest[i] = src[j];
		i++;
	}
	return (i);
}
