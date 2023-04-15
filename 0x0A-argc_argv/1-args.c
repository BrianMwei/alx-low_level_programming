#include <stdio.h>

/**
 * main - outputs the No. of arguments passed into it.
 * @argc: argument counter
 * @argv: arguments passed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
