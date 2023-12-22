#include "main.h"

/**
 * _isdigit - check if char is a digit.
 * @c: char variable
 *
 * Return: 1(is digit), 0(not digit)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
