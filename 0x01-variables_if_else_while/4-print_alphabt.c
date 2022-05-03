#include <stdio.h>

/**
 * main - prints all letters of the alphabet in lowercase, except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 && c != 113)
			putchar(c);
	}
	putchar(10);
	return (0);
}
