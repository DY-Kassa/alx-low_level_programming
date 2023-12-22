#include <unistd.h>

/**
 * _putchar - display given character.
 *
 * Return: write (1,&c,1)
 */

int _putchar(char c)
{
	return (write (1,&c,1));
}
