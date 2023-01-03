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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
			
		}

	}
	return (NULL);
}
