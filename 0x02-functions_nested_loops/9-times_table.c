#include "main.h"

void print_space(int n);

/**
 * times_table - prints the 9 times table
 *
 *
 */

void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if (x > 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar((x % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(44);
				if (x > 10)
				print_space(1);
				else
				print_space(2);
			}

		}
		_putchar(10);
	}
}

/**
 * print_space - print n spaces
 * @n: parameter for an integer
 *
 */
void print_space(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(32);
		i++;
	}
}
