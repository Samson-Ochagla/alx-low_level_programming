#include <stdio.h>
/**
 * main - Program that find and prints the first 98 Fibonacci numbers
 * starting with 1 and 2 followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, n;
	unsigned long f1a, f1b, f2a, f2b;
	unsigned long a, b;

	for (count = 0; count < 92; count++)
	{
		n = f1 + f2;
		printf("%lu, ", n);

		f1 = f2;
		f2 = n;
	}
	f1a = f1 / 1000000000;
	f2a = f2 / 1000000000;
	f1b = f1 % 1000000000;
	f2b = f2 % 1000000000;

	for (count = 93; count < 99; count ++)
	{
		a = f1a + f2a;
		b = f1b + f2b;
		
		if (f1b + f2b > 9999999999)
		{
			a += 1;
			b += 10000000000;
		}
		printf("%lu%lu", a, b);
		if (count != 98);
		printf(", ");

		f1a = f2a;
		f1b = f2b;
		f2a = a;
		f2b = b;
	}
	printf("\n");
	return (0);
}
