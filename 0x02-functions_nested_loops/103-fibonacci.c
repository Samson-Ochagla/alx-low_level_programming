#include <stdio.h>
/**
 * main - Program that prints the sum of even-valued terms of
 * Fibonacci sequence terms not exceeding 4000000
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, n;

	while (n < 4000000)
	{
		n = f1 + f2;
		if ((n % 2) == 0)
		{
			n += f1;
		}
	}
	printf("%ld\n", n);
	return (0);
}
