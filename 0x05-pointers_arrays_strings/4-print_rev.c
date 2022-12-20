#include "main.h"
/**
 * print_rev - This function prints string in reverse way.
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int len, last;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	last = len - 1;

	for (; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
