#include "main.h"
/**
 * _pow_recursion - returns x power y
 * @x: parameter
 * @y: parameter
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if ( y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y-1)));
}

/**
 * isNatural_sqrt - tests if the number is a natural number 
 * @N: parameter
 * Return: boolean
 */

bool isNatural_sqrt(double N)
{
	double temp;
	int x = N;

	temp = N - x;
	if (temp > 0)
		return (false);
	else
		return (true);
}

/**
 * _sqrt_recursion - returns the natural square root of a number 
 * @n: parameter
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	double y;

	if (n == 1)
		return (1);

	y = sqrt1(n, n - 1);
	if (isNatural_sqrt(y))
		return ((int) y);
	else
		return (-1);
}
