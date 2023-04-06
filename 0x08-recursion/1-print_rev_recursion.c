#include "main.h"
/**
 * _print_rev_recursion - lets  us output a string in reverse
 * @s: string to output in reverse
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
