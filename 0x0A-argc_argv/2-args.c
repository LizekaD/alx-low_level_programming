#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

