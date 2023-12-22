#include "main.h"

/**
 * _isupper - check if char is uppercase.
 * @c: char variable
 *
 * Return: 0(if lowercase), 1(if uppercase)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
