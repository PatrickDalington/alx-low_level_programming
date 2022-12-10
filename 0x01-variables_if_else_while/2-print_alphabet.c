#include <stdio.h>
#include <stdlab.h>
/**
 * main - main block 
 * Description: Use `putchar` fuction to print alphabets
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
