#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Create a program that generates random valid password
 * for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[4];
	int samson = 0, sum = 0, diff_half1, diff_half2;
	srand(time(0));

	while
		(sum <= 2772)
		{
			password[samson] = 33 + rand() % 14;
			sum = sum + password[samson++];
		}
	password[samson] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (samson = 0; password[samson]; samson++)
		{
			if (password[samson] >= (33 + diff_half1))
			{
				password[samson] -= diff_half1;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
