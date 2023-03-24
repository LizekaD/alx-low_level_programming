#include "main.h"

/**
 * _strlen - Rturn the length of the string
 * @s: String pointer to the string whose length is to be found
 * Return: p
 */
int _strlen(char *s)
{
	int p = 0;
	/*increment up to when the last character is null*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
