#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
