#include "main.h"

/**
 * *_memcpy - copies bytes from memory area.
 * @dest: pointer to char.
 * @src: pointer .
 * @n: unisgned int.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;

	for (pos = 0; pos < n; pos++)
		dest[pos] = src[pos];
	return (dest);
}
