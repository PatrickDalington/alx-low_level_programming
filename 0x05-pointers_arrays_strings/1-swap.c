#include "main.h"
/**
 * swap_int - THis will swap value of two ints.
 * @a: pointer to one int
 * @b: pointer to second int
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
