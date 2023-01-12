#include <stdlib.h>
#include "main.h"

/**
 * array_range- creates an arrayif int
 * @min: minimum value
 * @max: maximum value
 * Rturn: pointer
 * NULL if malloc fails
 * NULL if min > max
 */
int *arrays_range(int min, int max)
{
	int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);
	p = malloc(range * sizeof(int));

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
