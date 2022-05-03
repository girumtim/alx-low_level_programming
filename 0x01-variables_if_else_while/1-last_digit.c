#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	printf("Last digit of %d ", n);
		if (i > 5)
			printf("is %d and is greater than 5\n", i);
		else if (i == 0)
			printf("is %d and is 0\n", i);
		else
			printf("is %d and is less than 6 and not 0\n", i);
	return (0);
}
