#include <stdio.h>
#include <stdlib.h>

/**
 * main - Outputs product of arguments
 * @argc: how many arguments passed
 * @argv: atual arguments that have been passed
 * Return: 0 if successful, else, 1
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);

	return (0);
}
