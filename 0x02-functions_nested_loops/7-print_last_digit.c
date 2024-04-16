#include "main.h"

/**
 * print_last_digit - display last digit of a number
 * @num: integer taken as argument
 *
 * Return: last (the last digit)
 */

int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
