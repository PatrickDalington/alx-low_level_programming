#include "main.h"

/*
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: Always 0
 */

char *_strchr(char *s, char *accept)
{

	while (*s != '\0')
	{

		if (accept != '\0' && *s == accept)
			return (s);
		s++;
	}

	if (accept == '\0')
		return (s);


	return ('\0');
}
