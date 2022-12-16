#include <stdio.h>
/**
 *  main - C program that computes and prints the sum of all
 *  the multiples of 3 or 5 below 1024
 *  Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int i, sum = 0;
=======
	int i; sum = 0;
>>>>>>> 9b838fb2246af84b1947e3f52854e9b9f121cf70

	for (i= 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
