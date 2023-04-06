#include "main.h"
int prime_scanner(int n, int freq);
/**
 * is_prime_number - is number a prime number?
 * a prime number is only divisible by 1 or itself
 * @n: number in question
 * Return: 1 if yes, and 0 if no
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_scanner(n, n - 1));
}
/**
 * prime_scanner - function to scan the numbers
 * @n: is the number to check
 * @freq: rucurring number
 * Return: 0 if n is not a prime, and 1 if it is
 */
int prime_scanner(int n, int freq)
{
	if (freq == 1)
		return (1);
	if (n % freq == 0 && freq > 0)
		return (0);
	return (prime_scanner(n, freq - 1));
}
