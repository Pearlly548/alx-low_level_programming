#include "main.h"

/**
 * print_chessboard - this string prints a chessboard
 * @a: array to print the chessboard
 *
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int i1, i2;

	for (i1 = 0; a[i1][7]; i1++)
	{
		for (i2 = 0; i2 < 8; i2++)
			_putchar(a[i2][i2]);

		_putchar('\n');
	}
}
