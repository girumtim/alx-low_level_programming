#include <stdio.h>

/**
 * fibonacci_sum - print the sum of even-valued terms from Fibonacci numbers
 * @n: parameter for an integer
 *
 */

void fibonacci_sum(int n)
{
	int i;
	long f0 = 1;
	long f1 = 1;
	long fn = 0;
	long sum = 0;

	for (i = 1; i <= n; i++)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		if (i % 2 == 0)
			sum += fn;
	}
	printf("%ld", sum);
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
