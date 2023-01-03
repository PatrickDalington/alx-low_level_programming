#include "main.h"

/*
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @c: input
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{

		if ( *s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
