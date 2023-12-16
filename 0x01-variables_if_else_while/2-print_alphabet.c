#include <stdio.h>

/**
 * main - display the alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
