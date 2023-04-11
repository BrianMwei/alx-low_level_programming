#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenate 2 strings and return pointer to new address
 * @s1: 1st string
 * @s2: 2nd string
 * Return: Null if fail, else return new address
 */
char *str_concat(char *s1, char *s2)
{
	int content_s1, content_s2, length_s1, length_s2, new_length;
	char *concated;

	length_s1 = 0;
	length_s2 = 0;

	if (s1 != NULL)
	{
		content_s1 = 0;
		while (s1[content_s1++] != '\0')
			length_s1++;
	}

	if (s2 != NULL)
	{
		content_s1 = 0;
		while (s2[content_s1++] != '\0')
			length_s2++;
	}

	new_length = length_s1 + length_s2;
	concated = malloc(sizeof(char) * (new_length + 1));
	if (concated == NULL)
		return (NULL);

	for (content_s1 = 0; content_s1 < length_s1; content_s1++)
		concated[content_s1] = s1[content_s1];
	for (content_s2 = 0; content_s2 < length_s2; content_s2++, content_s1++)
		concated[content_s1] = s2[content_s2];
	concated[new_length] = '\0';

	return (concated);
}
