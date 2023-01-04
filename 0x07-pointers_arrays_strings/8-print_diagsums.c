#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The matrix of integers
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sam, sum1 = 0, sum2 = 0;

	for (sam = 0; sam < size; sam++)
	{
		sum1 += a[sam];
		a = a + size;
	}
	a = a - size;
	for (sam = 0; sam < size; sam++)
	{
		sum2 = sum2 + a[sam];
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
