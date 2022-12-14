#include "main.h"
/**
 * _islower -  This function will show 1  if the input is a lowercase character,
 * if not return 0
 *
 * @c: The charcter in ASCII code
 *
 *
 * Return: 1 for lowercase character. 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);

}
