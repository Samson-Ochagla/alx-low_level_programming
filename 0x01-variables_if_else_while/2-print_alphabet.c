#include <stdio.h>
#include <ctype.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main (void)
{
	char letter;
	for (letter = "a"; letter <= "z"; letter++)
	{
		putchartchar(letter);
	}
	putchar("\n");
	return (0);
}
