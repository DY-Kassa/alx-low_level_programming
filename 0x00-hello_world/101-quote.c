#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a message with a new line to std error
 *
 * Return: 1 (Success)
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;
	/**
	 * length of the message -1
	 * message written to stdout
	 */

	write(2, message, len);

	return(1);
}
