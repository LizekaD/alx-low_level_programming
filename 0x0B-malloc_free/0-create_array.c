#include "main.h"
#include <stdlib.h>

/**
 * char *create_array - creates an array and initializes with specific char.
 * @size: number of array
 * @c: char
 * Return: NULL if it fails or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/*check if malloc was successful*/

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
