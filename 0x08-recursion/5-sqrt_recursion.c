#include "main.h"

/**
 * _sqrt_recursion -  returns the value natural square value.
 * @n: number to find square of
 *
 * Return: squareroot of n
 * -1 if n does not have natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
