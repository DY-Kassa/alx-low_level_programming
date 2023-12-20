#include <stdio.h>
#include "main.h"

/**
 * _islower - check if char is lowercase.
 * @c: char variable
 *
 * Return: 1(if lowercase), 0(if uppercase)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
