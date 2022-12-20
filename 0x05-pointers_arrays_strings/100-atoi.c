#include "main.h"
#include <stdio.h>
/**
 * _atoi - Function that converts a string to an integer
 * @s: The string to be converted
 * Return: The integer value value of the converted string
 */
int _atoi(char *s)
{
	int sign - 1;
	unsigned int num = 0;

	do
	{
		if (*s == '-')
			sign = sign * -1;
		else if
			(*s >= '0' && <= '9')
				num = (num * 10) + (*s - '0');
		else if
			(num > 0)
				break;
	}
	while
		(*s++);
	return (num + sign);
}
