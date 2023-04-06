#include "main.h"
int sqrt_scanner(int n, int freq);
/**
 * _sqrt_recursion - output the squareroot of a recursion
 * sqrt_scanner - natural sqrt
 * @n: number to squareroot
 *
 * Return: -1 if n has no natural root else, root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_scanner(n, 0));
}

/**
 * sqrt_scanner - lets us check for natural sqrt
 * @n: looking for its sqaure root
 * @freq: number of times to check
 *
 * Return: the resulting square root
 */
int sqrt_scanner(int n, int freq)
{
	if (freq * freq > n)
		return (-1);
	if (freq * freq == n)
		return (freq);
	return (sqrt_scanner(n, freq + 1));
}
