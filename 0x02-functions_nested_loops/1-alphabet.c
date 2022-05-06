#include "main.h"

/**
 * print_alphabet -  prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
