#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible diferent combinations of 3 digits.
 * Return: 0
 */
int main(void)
{
	int w, x, y, z;

	for (w =0; w < 1000; w++)
	{
		x = w / 100; /* This will store hundreds */
		y = (w / 10) % 10; /* This will store tens */
		z = w % 10; /* This will store singles */

		if(x < y && y < z)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(z + '0');

			if (w < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
