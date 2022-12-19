#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: alphabetic charcter to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 * Return: 0 if otherwise
 */
int _isalpha(int c)
{
	if (c == a || c >= a && c <= z)
		return (1);
	else if (c == A || c>= A && c <= Z)
		return(0);
}
