#include <stdio.h>
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
		if (*s == accept)
			return (s);
		s++;
	}

	if (*s == accept)
		return (s);


	return ('\0');
}
