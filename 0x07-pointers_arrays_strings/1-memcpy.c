#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source buffer to copy characters from
 * @n: size of bytes
 * Return: A pointer to dest
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);
	return (dest);
}
