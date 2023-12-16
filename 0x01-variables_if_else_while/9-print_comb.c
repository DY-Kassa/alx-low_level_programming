#include <stdio.h>

/**
 * main - print numbers less than 10 separated by commas
 *
 * Return: Always 0(Success).
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
