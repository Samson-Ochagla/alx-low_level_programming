#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @x: the frst integer to be swapped
 * @y: the second integer to be swapped
 */
void swap_int(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
