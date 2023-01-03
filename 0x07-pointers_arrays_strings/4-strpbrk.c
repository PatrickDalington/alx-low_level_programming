#include "main.h"
/**
 * _strpbrk - this function searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the 
 * bytes in accept,, or Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
