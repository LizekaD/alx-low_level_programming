#include "main.h"
/**
 * _length - checks the length of a string
 * @s: the string
 * Return: return the length of string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 * checkp - check if the string is palindrome
 * @i: the index
 * @lg: the length of string
 * @s: the string
 * Return: 1 if palindrome or 0 if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrom - check if a string is a palindrome
 * @s: the string
 * Return: return 1 if the string is a palindrome or 0 otherwis
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}

