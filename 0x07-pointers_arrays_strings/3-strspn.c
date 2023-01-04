#include "main.h"
/**
 * _strpbrk - function that gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 * Return: The number of bytes in s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int sam;

	while (*s)
	{
		for (sam = 0; accept[sam]; sam++)
		{
			if (*s == accept[sam])
			{
				bytes++;
				break;
			}
			else if (accept[sam + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
