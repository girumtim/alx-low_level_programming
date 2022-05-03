#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
