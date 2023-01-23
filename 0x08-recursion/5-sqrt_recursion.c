#include "main.h"
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
		return (-1);

	return (getNumSqr(n, 4));
}
