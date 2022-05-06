#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
