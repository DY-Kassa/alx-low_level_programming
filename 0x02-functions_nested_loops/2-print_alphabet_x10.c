#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet x10.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x, y;

	x = 0;
	while (x < 10)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar (y);
		}
		x++;
		_putchar ('\n');
	}
}
