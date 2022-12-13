#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * You can only use the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
