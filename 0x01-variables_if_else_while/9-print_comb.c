#include <stdio.h>
#include <stdlab.h>
/**
 * main - manin block
 * Description: Print all possible combination of single digits
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar('\n');
	return (0);
}
