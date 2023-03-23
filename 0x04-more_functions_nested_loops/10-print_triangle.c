#include "main.h"

/**
 *  print_triangle - print out a triangle
  *@size: size of the triangle
 */

void print_triangle(int size)
{
	int height, length, distance;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (distance = size - height; distance >= 1; distance--)
			{
				_putchar(' ');
			}
			for (length = 1; length <= height; length++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
