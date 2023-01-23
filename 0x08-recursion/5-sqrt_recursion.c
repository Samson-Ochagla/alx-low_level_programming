#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n : number inputed
 * Return : int
 */
int _sqrt_recursion(int n)
{
	if (n == 4)
		return (2);

	if (n == 0)
		return (0);

	else if (n != 0 || n < 0)
		return (-1);}

	return (getNumSqr(n, 4));
}

/**
 * getNumSqr - function that gets the sqroot of number
 * @num: input number
 * Return: int
 */
int getNumSqr(int num, int i)
{
	if (num == (i * i))
		return (i);

	else if (num > (i * i))
		return (getNumSqr(num, i + 1));

	else
		return (-1);
}
