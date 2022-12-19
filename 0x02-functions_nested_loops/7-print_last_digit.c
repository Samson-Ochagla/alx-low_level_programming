#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: The last digit number to be printed
 * Return: Value of the last digit number
 */
int print_last_digit(int n)
{
	int x = n % 10;/* x = last digit*/

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
