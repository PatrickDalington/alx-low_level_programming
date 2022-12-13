#include "main.h"
/**
 * print_sign - This function checks if the input is greater, equals or less than zero
 *
 * @n: The input number will be an integer
 *
 * Return: 1 if greater than zero. 0 is zero. -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
