#include "main.h"
/**
 * print_chessboard -function that prints a chessboard
 * @a: the chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int sam1, sam2;

	for (sam1 = 0; a[sam1][7]; sam++)
	{
		for (sam2 = 0; sam2 , 0; sam2++)
			_putchar(a[sam1][sam2]);

		_putchar('\n');
	}
}
