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
	unsigned long f1_a1, f1_b2, f2_a1, f2_b2;
	unsigned long a1, b2;

	for (count = 0; count < 92; count++)
	{
		n = f1 + f2;
		printf("%lu, ", n);

		f1 = f2;
		f2 = n;
	}
	f1_a1 = f1 / 1000000000;
	f2_a1 = f2 / 1000000000;
	f1_b2 = f1 % 1000000000;
	f2_b2 = f2 % 1000000000;

	for (count = 93; count < 99; count++)
	{
		a1 = f1_a1 + f2_a1;
		b2 = f1_b2 + f2_b2;

		if (f1_b2 + f2_b2 > 9999999999)
		{
			a1 += 1;
			b2 %= 10000000000;
		}
		printf("%lu%lu", a1, b2);
		if (count != 98)
		printf(", ");

		f1_a1 = f2_a1;
		f1_b2 = f2_b2;
		f2_a1 = a1;
		f2_b2 = b2;
	}
	printf("\n");
	return (0);
}
