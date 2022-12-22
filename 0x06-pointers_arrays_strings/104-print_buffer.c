#include "main.h"
#include <stdio.h>
/**
 * print_buffer - this function prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
 */

void print_buffer(char *b, int size)
{
	int x, y, z;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (x = 0; x < size; x += 10)
		{
			printf("%.8:", x);
