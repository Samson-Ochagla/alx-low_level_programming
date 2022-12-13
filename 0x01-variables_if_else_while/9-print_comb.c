#include <stdio.h>
/**
 * main - Program that prints all possible combinations of single-digit numbers
 * Seperated by ,, followed by a space and printed in ascending order
 * You can only use the putchar function
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10 ) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
