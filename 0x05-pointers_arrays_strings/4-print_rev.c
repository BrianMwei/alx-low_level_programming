#include "main.h"
/**
 * print_rev - print a string, in reverse
 * @s: string to print
 * return: length of the string
 */
void print_rev(char *s)
{
	int counter = 0;
	int input;



	while (s[counter] != '\0')
		counter++;
	for (input = counter - 1; input >= 0; input--)
	{
		_putchar(s[input]);
	}
	_putchar('\n');
}
