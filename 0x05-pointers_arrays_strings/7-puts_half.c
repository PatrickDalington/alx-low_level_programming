#include "main.h"
/**
 * puts_half - this function prints half of any string
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int x, len, m;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		m = len / 2;
		for (x = m; x < len; x++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		m = (len -1) / 2;
		for (x = m + 1; x < len; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}	
