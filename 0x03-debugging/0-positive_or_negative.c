#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether the randomly generated number and stored
 * in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
