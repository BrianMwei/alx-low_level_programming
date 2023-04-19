#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - does what the function does using a function pointer
 * @array: pointer to array
 * @size: the array size
 * @action: function pointer to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last_point_of_array = array + size - 1;
       

	if (array != NULL && size > 0 && action != NULL)
		while (array <= last_point_of_array)
			action(*array++);
}
