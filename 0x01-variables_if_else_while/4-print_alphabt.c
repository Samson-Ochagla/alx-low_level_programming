#include <stdio.h>
/**
 * main - Program that prints the alphabetexcept lettrs q and e in lowercase,
 * followed by a new lineusing only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
