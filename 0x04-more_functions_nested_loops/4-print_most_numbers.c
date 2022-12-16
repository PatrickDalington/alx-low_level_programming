#inclcude "main.h"
/**
 * print_most_numbers - THis function prints most except 2and 4 numbers
 *
 * Return: void 
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if ((x ==2) || (x ==4))
		{
			continue;
		}
		_putchar('0' + x);
	}
	_putchar('\n');
}
