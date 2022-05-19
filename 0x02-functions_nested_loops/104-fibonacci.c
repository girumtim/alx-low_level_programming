#include <stdio.h>

/**
 * fibonacci - print the first 98 Fibonacci numbers
 * @n: parameter for an integer
 *
 */
void fibonacci(int n)
{
	int i;
	unsigned long f0 = 0;
	unsigned long f1 = 1;
	unsigned long fn = 0;

	for (i = 1; i <= n; i++)
	{
		if (i < n)
			printf("%lu, ", f1);
		else
			printf("%lu", f1);
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
	fibonacci(98);
	printf("\n");
	return (0);
}
