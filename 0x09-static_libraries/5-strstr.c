#include "main.h"
/**
 * _strstr - this function finds the first occurrence of the substring
 * needle in the string heystack.
 * @heystack: input
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (*pneedle == '\0')
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
