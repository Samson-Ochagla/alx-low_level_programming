#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: The last digit number to be printed
 * Return: Value of the last digit number
 */
int print_last_digit(int n)
{
	int n = n % 10;

	if (n < 0)
		n *= -1;
	putchar(n + '0');
	return (n);
}
