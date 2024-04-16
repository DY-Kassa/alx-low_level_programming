#include <unistd.h>

/**
 * _putchar - display given character.
 * @c: char
 *
 * Return: 1(Successful).
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
