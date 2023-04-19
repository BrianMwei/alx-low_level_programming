#include "function_pointers.h"

/**
 * int_index - function to compare numbers in an array
 * @array: pointer to the memory address of array
 * @size: size of the array
 * @cmp: pointer to function for comparing the ints
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int content;

	content = 0;
	if (array != NULL || size <= 0  || cmp != NULL)
		while (content < size)
		{
			if (cmp(array[content]) != 0)
				return (content);
			content++;
		}
	return (-1);
}
