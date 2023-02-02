#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: base number
 * @y: pow number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to an string
 * Return: int
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 * Otherwise - the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len, exp = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (len-- && len >= 0)
	{
		if (b[len] == '1')
			res += _pow_recursion(2, exp);
		else if (b[len] != '0')
			return (0);
		exp++;
	}
	return (res);
}
