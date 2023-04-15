#include "main.h"
/**
 * _strchr - find a character in a string
 * @s:the string in question
 * @c: character to be found
 * Return: first sighting the character
 */
char *_strchr(char *s, char c)
{
	int content;


	for (content = 0; s[content] >= '\0'; content++)
	{
		if (s[content] == c)
			return (&s[content]);
	}
	return (0);
}
