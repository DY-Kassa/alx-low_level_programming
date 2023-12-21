#include "main.h"

/**
 * _abs - prints the absolute value.
 * @i: int
 *
 * Return: 0
 */

int _abs(int i)
{
	int n = i;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		n = -n;
		_putchar(n);
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
