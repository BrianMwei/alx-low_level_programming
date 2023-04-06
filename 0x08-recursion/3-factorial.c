#include "main.h"
/**
 * factorial - outputs the resulting factorial of a number
 * @n: number in question
 * Return: -1 if less than 0 else, 1
 */
int factorial(int n)
{
	unsigned int number;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		number = n * factorial(n - 1);
	}
	return (number);
}
