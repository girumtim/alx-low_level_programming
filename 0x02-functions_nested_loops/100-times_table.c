#include "main.h"

void print_space(int n);

/**
 * print_times_table - prints the n times table starting with 0
 * @n: parameter for an integer
 *
 */

void print_times_table(int n)
{
	int i, j, x;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				if (x < 10)
				{
					if (j != 0)
						print_space(3);
					_putchar((x % 10) + '0');
				}
				else if (x > 100)
				{
					print_space(1);
					_putchar((x / 100) + '0');
					_putchar((x / 10 % 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					print_space(2);
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				if (j < n)
				{
					_putchar(44);
				}
			}
			_putchar(10);
		}
	} 
}

/**
 * print_space - prints n space(s)
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
