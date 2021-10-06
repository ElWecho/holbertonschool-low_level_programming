#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int repeat, message;

		for (repeat = 0; repeat <= 9; repeat++)
	{
		for (message = 97; message <= 122; message++)

		{
			_putchar(message);
		}
		_putchar('\n')
	}
}
