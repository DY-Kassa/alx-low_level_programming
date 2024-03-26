#include "main.h"

/**
 * more_numbers - print numbers 0-14
 * @void: no input required
 *
 * Return: void
 */

void more_numbers(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
