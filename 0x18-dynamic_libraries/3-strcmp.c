#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equal
 * another number if not.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, s = 0;

	while (s ==0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		s = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (s);
}
