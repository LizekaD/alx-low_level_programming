#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * print a number, followed by a new line
 * @args: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
		(void)argv;
	return (0);
}
