#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First argument to be swapped.
 * @b: second argument to be swapped.
 *
 * Return: Void
 */
int swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
