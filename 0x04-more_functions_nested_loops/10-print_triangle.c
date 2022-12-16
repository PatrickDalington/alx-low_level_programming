#include "main.h"
/**
 * print_triangle - This gunction prints a triangle of size size
 * @size: size of triangle
 * Return: 00
 */
void print_triangle(int size)
{
	int a, b, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			_putchar(' ');
		
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

