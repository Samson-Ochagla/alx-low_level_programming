#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: a pointer to the first occurence if C is found
 * NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	int sam;

	for (sam = 0; s[sam] >= '\0'; sam++)
	{
		if (s[sam] == c)
			return (s + sam);
	}
	return ('\0');
}
