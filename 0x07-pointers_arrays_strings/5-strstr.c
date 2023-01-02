#include "main.h"
/**
 * _strstr - this function finds the first occurrence of the substring
 * needle in the string heystack.
 * @heystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or NULL if the 
 * substring s not found.
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
			haystacck++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
