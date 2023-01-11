#include <unistd.h>

/**
 * _putchar - write the character of c to stdout
 * @c: character to print
 *
 * Return: On Success 1
 * on error, -1 is returned
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
