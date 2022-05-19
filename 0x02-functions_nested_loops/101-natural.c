#include "main.h"
#include <stdio.h>

/**
 * sum_of_multiples - prints the sum of the multiples of two integers
 * @x: paramater for an integer
 * @y: parameter for an integer
 * @n: parameter for an integer
 *
 */

void sum_of_multiples(int x, int y, int n)
{
	int i = 0;
	int sum = 0;
	
	while (i < n)
	{
		if ((i % x == 0) || (i % y == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
}



