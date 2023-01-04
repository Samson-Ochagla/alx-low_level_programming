#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source buffer to copy characters from
 * @n: The number of bytes to copy from @src
 * Return: A pointer to the destination buffer @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int sam;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (sam = 0; sam < n; sam++)
		destination[sam] = source[sam];
	return (dest);
}
