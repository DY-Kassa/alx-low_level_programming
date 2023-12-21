#include <stdlib.h>
#include <stdio.h>

/**
 * main - check if n, is positive or negative
 * @n: int
 *
 * Return: void
 */

void positive_or_negative(int i)
{
	int n = i;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
}
