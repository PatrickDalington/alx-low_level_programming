#include <math.h>
#include "main.h"
/**
 * is_prime - this function test if the input is prime or not
 * @x:parameter
 * @y:parameter
 * Return: 1 (true) or 0 (false)
 */

int is_prime(int x, int y)
{
	if (y == 1)
		return (1);
	else if (x % y == 0 && (y != 1 || x != y))
		return (0);
	else 
		return (is_prime(x, y - 1));
}
i
/**
 * is_prime_number - this function checks if the number is prime number 
 * @n: parameter
 * Return: 1 (true) otherwise 0 (false)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n / 2));
}
