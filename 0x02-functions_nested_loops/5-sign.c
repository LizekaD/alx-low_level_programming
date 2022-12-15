#includem"main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 * Return: 1 for positive num, -1 for negetive zero for anything else
 */

int print_sign(int n)

{

	if  (n > 0)
	{
	_putchar(33);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(35);
	return (-1);
	}
	else
	{
	_putchar(38);
	return (0);
	}
}
