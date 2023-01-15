#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: main string to be examined
 * @needle: searched in haystack
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*DECLARING VARIABLES*/

		while (*haystack != '\0')
		{
			str1 = haystack; /*values*/
			str2 = needle;

			/*star while*/
			while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
			{
				haystack++;
				str2++;
			}
			if (*str2 == '\0')
				return (str1);
			haystack = str1 + 1;
		}
		return (0);
}
