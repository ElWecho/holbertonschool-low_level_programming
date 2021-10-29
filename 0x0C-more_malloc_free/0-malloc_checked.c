#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: auxiliar variable.
 * Return: 98
 */
void *malloc_checked(unsigned int b)
{
	char *aux;

	aux = malloc(b);

	if (aux == NULL)
		exit(98);
	return (aux);
}
