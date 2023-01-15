#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled
 * @b: The constant byte, character to fill the memory area
 * @n: The number of bytes to be filled
 * Return: s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
