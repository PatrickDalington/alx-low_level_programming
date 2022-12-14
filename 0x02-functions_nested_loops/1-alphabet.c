#include "main.h"
/**
 * print_alphabet- this function prints a-z
 * Description: Write a function that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Always 0
 */
int print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
