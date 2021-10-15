#include "main.h"

/**
 * _strcat - concatenate two strings.
 * @src: char string.
 * @dest: char string.
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
