#include "main.h"
/**
 * *string_toupper - this function changes all lowercase letters of a string to uppercase letters
 * @str: string to return
 * Return: string
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - 32;
		}
	}
	return (str);
}
