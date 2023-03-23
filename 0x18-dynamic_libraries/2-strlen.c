#include "main.h"
/**
 * _strlen - This function finds and outputs the length of string
 * @s: pointer to sttring.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
