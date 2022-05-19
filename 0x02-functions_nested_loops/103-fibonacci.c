#include <stdio.h>

/**
 * fibonacci_sum - print the sum of even-valued terms from Fibonacci numbers
 * @n: parameter for an integer
 *
 */

void fibonacci_sum(int n)
{
	int f0 = 0;
	int f1 = 1;
	int fn = 0;
	int sum = 0;

	while (fn < n)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		if (fn % 2 == 0)
			sum += fn;
	}
	printf("%i", sum);
}

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci_sum(4000000);
	printf("\n");
	return (0);
}
