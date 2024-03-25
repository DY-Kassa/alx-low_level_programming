#include "main.h"

/**
 * more_numbers - print numbers 0-14
 * @void: no input required
 *
 * Return: void
 */

void more_numbers(void)
{
	char c, d;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar (c);
		if (c == '9')
		{
			for (d = '0'; d <= '4'; d++)
			{
				_putchar ('1' + d);
			}
			_putchar ('\n');
		}
	}
}
