#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');
	return (0);
}
