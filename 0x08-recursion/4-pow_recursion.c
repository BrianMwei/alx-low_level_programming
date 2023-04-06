#include "main.h"
/**
 * _pow_recursion - output the value of x power y
 * @x: superscript
 * @y: number in question
 * Return: result if y is > 0, else -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);

	}
	else
	return (x * _pow_recursion(x, y - 1));
}
