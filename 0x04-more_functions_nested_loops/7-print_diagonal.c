#include "main.h"
/**
 * print_diagonal - prints a line n chars long
 * @n: number of backward slash
 * Return; 0
 */
void print_diagonal(int n)
{
	int x, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (space = 0; space < x; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
