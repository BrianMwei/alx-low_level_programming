#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first number
 * @b: second number
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap_num;

	swap_num = *b;
	*b = *a;
	*a = swap_num;
}
