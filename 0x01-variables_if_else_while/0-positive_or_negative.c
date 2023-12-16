#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - assign random number to n, print the sign if the number, + or -.
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	while (n == 0)
	{
		printf("%d is zero\n", n);
		break;
	}
	while (n < 0)
	{
		printf("%d is negative\n", n);
		break;
	}
	while (n > 0)
	{
		printf("%d is positive\n", n);
		break;
	}
	return (0);
}
