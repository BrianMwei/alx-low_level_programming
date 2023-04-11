#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of size @size and assign @c
 * array of chars using a specific char
 * @size: size of the arrray
 * @c: character to be assigned
 * Return: *array if successful, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int content;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);

	for (content = 0; content < size; content++)
		ar[content] = c;

	return (ar);
}
