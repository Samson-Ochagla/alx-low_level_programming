#includde "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: a pointer to beginning of line if the substring is located
 *       : NULL if substring is not locatd
 */
char *_strstr(char *haystack, char *needle)
{
	int sam;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		sam = 0;
		if (haystack[sam] == needle[sam])
		{
			do {
				if (needle[sam + 1] == '\0')
					return (haystack);
				
				sam++;
			} while (haystack[sam] == needle[sam]);
		}
		
		haystack++;
	}
	return ('\0');
}
