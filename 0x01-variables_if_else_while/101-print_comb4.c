#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			if (x < y)
			{
				for (z = 48; z < 58; z++)
				{
					if (y < z)
					{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == 55 && y == 56 && z == 57)
						break;
					putchar(44);
					putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
