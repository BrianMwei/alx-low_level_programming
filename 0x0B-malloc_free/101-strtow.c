#include "main.h"
#include <stdlib.h>

int word_length(char *str);
int num_of_words(char *str);
char **strtow(char *str);

/**
 * word_length - identifies the first word in a string
 * @str: the string
 * Return: pointer to the last part of the 1st word
 */
int word_length(char *str)
{
	int count = 0, length = 0;

	while (*(str + count) && *(str + count) != ' ')
	{
		length++;
		count++;
	}

	return (length);
}

/**
 * num_of_words - number of words in a string
 * @str: the string
 * Return: number of words in string
 */
int num_of_words(char *str)
{
	int count = 0, wrds = 0, length = 0;

	for (count = 0; *(str + count); count++)
		length++;

	for (count = 0; count < length; count++)
	{
		if (*(str + count) != ' ')
		{
			wrds++;
			count += num_of_words(str + count);
		}
	}

	return (wrds);
}

/**
 * strtow - splits a string into each word
 * @str: the string
 * Return: NULL if function fails, else, pointer to array words
 */
char **strtow(char *str)
{
	char **arr;
	int count = 0, wrds, content_wrds, ltrs, content_ltrs;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wrds = num_of_words(str);
	if (wrds == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (wrds + 1));
	if (arr == NULL)
		return (NULL);

	for (content_wrds = 0; content_wrds < wrds; content_wrds++)
	{
		while (str[count] == ' ')
			count++;

		ltrs = word_length(str + count);

		arr[content_wrds] = malloc(sizeof(char) * (ltrs + 1));

		if (arr[content_wrds] == NULL)
		{
			for (; content_wrds >= 0; content_wrds--)
				free(arr[content_wrds]);

			free(arr);
			return (NULL);
		}

		for (content_ltrs = 0; content_ltrs < ltrs; content_ltrs++)
			arr[content_wrds][content_ltrs] = str[count++];

		arr[content_wrds][content_ltrs] = '\0';
	}
	arr[content_wrds] = NULL;

	return (arr);
}
