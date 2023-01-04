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
	char *res;
	char *aux;

	while (*haystack != '\0')
	{
		res = haystack;
		aux = needle;

		while (*aux == *haystack && *aux != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			aux++;
		}
		if (*aux == '\0')
			return (res);
		haystack = res + 1;
	}
	return (NULL);
}
