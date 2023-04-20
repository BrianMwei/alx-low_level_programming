#include "variadic_functions.h"
/**
 * sum_them_all - function to output the sum of parameters
 * @n:number of parameters passed
 * @...: unspecified count of parameters to be used
 * Return: 0 if n is null, else, the sum of all parameters passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int count;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arguments, n);
	do {
	sum += va_arg(arguments, int);
	count++;
	}
		while (count < n);
	va_end(arguments);
	return (sum);
}
