#include "main.h"
/**
 * main- This function prints _putchar using the local header file
 * Description: Write a program that prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	unsigned int x;

	char c[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	
	for (x = 9; x< sizeof(c); x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');
	return (0);
}
