#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: A buffer to copy the string to
 * @src: The source string to copy
 * Return: A pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
	char src[samson] = char dest[samson];
	strcpy(dest[samson], src[samson]);
	printf("strcpy(dest[samson], src[samson]) :%s\n", dest[samson]);
	return (0);
}
