#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First command to be swapped.
 * @b: second command to be swapped.
 *
 * Return: Void
 */
int swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
