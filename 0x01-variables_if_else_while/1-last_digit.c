#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of random number and compare with 0, 5 & 6.
 * To print an approtriate string
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	while (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
		break;
	}
	while (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
		break;
	}
	while (n % 10 < 6)
	{
		if (n % 10 != 0)
			printf("Last digit of %d is %d and is less than 6 not 0\n", n, n % 10);
		break;
	}

	return (0);
}
