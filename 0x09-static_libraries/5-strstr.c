#include "main.h"
/**
 * _strstr - find the first appearance of needle
 * @needle: what we need to find
 * @haystack: where we need to find the needle
 * Return: location or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int dry = 0, shiny = 0;

	while (haystack[dry])
	{
		while (needle[shiny] && (haystack[dry] == needle[0]))
		{
			if (haystack[dry + shiny] == needle[shiny])
				shiny++;
			else
				break;
		}
		if (needle[shiny])
		{
			dry++;
			shiny = 0;
		}
		else
			return (haystack + dry);
	}
	return (0);
}
