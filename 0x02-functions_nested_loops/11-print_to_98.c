#include "main.h"
#include <stdio.h>

void add_separator(int i);

/**
 * print_to_98 - prints all integers from n to 98
 * @n: parameter for an integer
 *
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			add_separator(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			add_separator(i);
		}
	}
	printf("\n");
}

/**
 * add_separator - prints a comma, followed by a space
 * @i: parameter for an integer
 *
 */

void add_separator(int i)
{
	if (i != 98)
		printf(", ");
}
