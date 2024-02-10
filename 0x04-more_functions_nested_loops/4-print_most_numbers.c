#include "main.h"

/**
 * print_most_numbers - print some numbers 0-9
 * @void: no input required
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar (c);
	}
	_putchar ('\n');
}