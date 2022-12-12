#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed
 * and determine if the number is greater than 5: is positive
 * if the number is 0: is zero, if the number is less than 6: is negative
 * followed by  a new line
 * Return 0 Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			       n, n % 10);
	}	
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
        else
	{
	        printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
        return (0);	
