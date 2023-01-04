#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for
 * Return: If a set is matched - a pointer to the matched byte
 * NULL if no set is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int sam;

	while (*s)
	{
		for (sam = 0; accept[sam]; sam++)
		{
			for (sam = 0; accept[sam]; sam++)
				if (*s == accept[sam])
					return (s);
		}
		s++
	}
	return ('\0');
}
