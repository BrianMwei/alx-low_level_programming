#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name 
 * @f: function of the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
		if (!f || !name)
			return;
	if (name != NULL && f != NULL)
		f(name);
	else
		return;
}
