#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
 *  main Assign a random number to a variable and prints:
 *  if the number is greater than 0: is positive
 *  if the number is 0: is zero
 *  if the number is less than 0: is negative, followed by a new line
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("value of %d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("value of %d is negative\n", n);
	}
	else
	{
		printf("value of %d is zero\n", n);
	}
	return (0);
}
