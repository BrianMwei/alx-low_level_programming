
 

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - points to an allocated mem with a copy of string declared
 * @str: string to work with
 * Return: *string
 */
char *_strdup(char *str)
{
	char *string_copy;
	int content, string_length;

	string_length = 0;

	if (str == NULL)
		return (NULL);

	while (str[string_length] != '\0')
		string_length++;

	string_copy = malloc((sizeof(char) * string_length) + 1);
	if (string_copy == NULL)
		return (NULL);

	for (content = 0; content < string_length; content++)
		string_copy[content] = str[content];
	string_copy[string_length] = '\0';

	return (string_copy);
}
