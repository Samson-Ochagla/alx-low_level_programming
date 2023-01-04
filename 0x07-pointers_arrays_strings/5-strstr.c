#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: a pointer to the beginning of the string
 *         if substring is found
 * Return: NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int sam;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		{
		if do{
			if (needle[sam + 1] == '\0')
				return (haystack);
			sam++;
		} while (haystack[sam] == needle[sam]);
	}
		haystack++;
	}
	return ('\0');
}
