#include <stdio.h>

/**
 * main - print figures of base 16, including 0.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char x, y;

	for (x = 48; x < 58; x++)
		putchar(x);
	for (y = 97; y < 103; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
