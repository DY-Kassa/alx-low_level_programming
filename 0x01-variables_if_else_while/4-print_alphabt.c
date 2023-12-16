#include <stdio.h>

/**
 * main - display the alphabet in lowercase except q a nde
 *
 * Return: 0 on success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
