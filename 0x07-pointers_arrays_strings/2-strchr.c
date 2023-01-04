#include "main.h"

/**
 * _strchr - locating a character in a string
 * @s: source string
 * @c: character to search
 * Return:  pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0') /*DECLARING WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);/*values null*/
}

