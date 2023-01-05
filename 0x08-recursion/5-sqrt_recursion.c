#include "main.h"
#include <math.h>
#include <stdbool.h>

/**
 * sqrt1 - finds the square root 
 * @n: number to look for it's sqrt
 * @a: parameter
 * Return: sqrt
 */

double sqrt1(int n, int a)
{
	if (n == 1)
		return (1);
	else if (a < 1)
		return (-1)
	else if (a * a == n)
		return (a);
	else if (a >= 8000)
		return (sqrt1(n, a - 1));
}
