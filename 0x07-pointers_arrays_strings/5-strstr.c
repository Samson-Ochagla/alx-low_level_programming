#include "main.h"
/**
 * _strstr - function tha locates a substring
 * @paystack: the string to e searched
 * @needle: the substring to located
 * Return: a pointer to the beginning if th substring is located
 *       : NULL if the substring is not located
 */
char *_strstr(char *haystack, char *needle)
{
	int sam;
	if (*needle == 0)
		return (haystack);
	while (haystack)
	{
		sam = 0;

		if (haystack[sam] == needle[index])
		{
			do{
				if (needle[sam + 1] == '\0')
					return(haystack);

				sam++;
			}while (haystack[sam] == needle[sam];
					}
					haystack++;
					}
					return ('\0');
					}
