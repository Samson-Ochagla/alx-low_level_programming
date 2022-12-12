#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %1i byte(s)\n", sizeof(char));
	printf("Size of an int: %1i byte(s)\n", sizeof(int));
	printf("Size of a long int: %1i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %1i byte(s)\n", sizeof(long long int));
	ptintf("Size of a float: %1i byte(s)\n", sizeof(float));
	return 0;
}
