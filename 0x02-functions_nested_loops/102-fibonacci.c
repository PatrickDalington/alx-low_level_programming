#include <stdio.h>
/**
 * main - print first 50 fibonacci, starting with 1 and 2
 * followed by new line.
 * Return: 0
 */
int main(void)
{
	long int x, y, z, next;

	y = 1;
	z = 2;

	for (x = 1; x <= 50; x++)
	{
		if (y != 20365011074)
		{
			printf("%ld, ", y);
		}
		else
		{
			printf("%ld ", y);
		}
		next = y + z;
		y = z;
		z = next;
	}
	return (0);
}
