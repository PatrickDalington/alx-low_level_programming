#include "main.h"
/**
 * leet - this function encodes a string into 1337
 * @c: string
 * Return: encoded string
 */

char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int x;

	while (*c)
	{
		for (x = 0; x < sizeof(key) / sizeof(char); x++)
		{
			if (*c == key[x] || *c == key[x] + 32)
			{
				*c = 48 + value[x];
			}
		}
		c++;
	}
	return (cp);
}
