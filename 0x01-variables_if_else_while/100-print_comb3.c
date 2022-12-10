#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two digits
 * Numbers must be separated by commas and a spe.
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a % 10; /* This will hold single digits */
		c = a / 10; /* This will hold double digits */

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		a++;
	}
	putchar('\n')
	return (0);	
}
