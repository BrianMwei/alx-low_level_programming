#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Output summation of arguments
 * @argc: how many arguments passed
 * @argv: atual arguments that have been passed
 * Return: 0 if successful, else, 1
 */

int main(int argc, char *argv[])
{
	int total_sum = 0;
	int arg;
	const char *num2;
	const char *symbol;

	for (arg = 1; arg < argc; arg++)
	{
		num2 = argv[arg];
		for (symbol = num2; *symbol != '\0'; symbol++)
		{
			if (!isdigit(*symbol))
			{
				printf("Error\n");
				return (1);
			}
		}
		total_sum += atoi(num2);
	}
	printf("%d\n", total_sum);
	return (0);
}
