#include <stdio.h>
#include "main.h"

/**
 * _is lpha- check if char is uppercase.
 * @c: char variable
 *
 * Return: 0(if lowercase), 1(if uppercase)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
