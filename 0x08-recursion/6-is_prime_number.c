#include "main.h"
int getNumPrim(int num, int i);
int is_prime_number(int n);
/**
 * getNumPrim - Checks if a number is 0 or 1
 * @num: The number to be checked
 * @i: The counter number
 * Return: int
 */
int getNumPrim(int num, int i)
{
	if (num == i)
		return (1);

	if (num % i == 0)
		return (0);
	return (getNumPrim(num, i + 1));
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 * 0 If the integer is not prime
 * 1 If the number is prime
 */
int is_pirime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getNumPrim(n, 2));
}
