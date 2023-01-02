#include "main.h"

/**
 * print_chessboard - this function prints the chessboard
 * @a: input pointer
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	unsigned int x, m = 0;

	for (x = 0; x < 64; x++)
	{
		if (x % 8 == 0 && x != 00)
		{
			m = x;
			_putchar('\n');
		}
		_putchar(a[x / 8][x - m]);
	}
	_putchar('\n');

}
