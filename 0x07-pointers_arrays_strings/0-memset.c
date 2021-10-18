#include "main.h"

/**
 * _memset - fills memory with constant type.
 * @s: pointer to char.
 * @b: char.
 * @n: unsigned int.
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int pos;

	for (pos = 0; s[pos] != '\0' && pos < n; pos++)
		s[pos] = b;
	return (s);
}
