#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Use `purchar` to print all lowercase without q and e
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if(a != 'q' && a != 'e')
			putchar(a);

		a++;
	}

	putchar('\n');
	return (0);
}
