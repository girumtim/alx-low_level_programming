#include "main.h"
#include <stdio.h>
/**
 * main -  prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 10;

	while (i > 0)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i--;
	}
}
