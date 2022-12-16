#include <stdio.h>
/**
 * main - Program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * seperated by a comma and followed by a new line
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int cout;
	unsigned long f1 = 0, f2 = 1, n;

	for (cout = 0; cout < 50; cout++)
	{
		n = f1 + f2;
		printf("%lu", n);
		f1 = f2;
		f2 = n;

		if (cout == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
