#include "main.h"
#include <stdio.h>

/**
 * isLower - this function determines whether ascii is lower
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - this fuction determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int x;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (x = 0; x < 12; x++)
	{
		if (c == delimiter[x])
			return (1);
	}

	return (0);
}

/**
 * cap_string - this function capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int del = 1;

	while (*s)
	{
		if (isDelimiter(*s))
		{
			del = 1;
		}
		else if ( isLower(*s) && del)
		{
			*s -= 32;
			del = 0;
		}
		else
			del = 0;
		s++;
	}
	return (ptr);
}




