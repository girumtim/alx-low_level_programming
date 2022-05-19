#include <stdio.h>

/**
 * fibonacci - print the first 50 Fibonacci numbers
 *
 */

void fibonacci(int n)
{
	int i;
	long f0 = 1;
	long f1 = 1;
	long fn = 0;

	for (i = 1; i <= n; i++)
	{
		if (i < n)
			printf("%ld, ", f1);
		else
			printf("%ld", f1);
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci(50);
	printf("\n");
	return (0);
}
