#include "main.h"
#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
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
