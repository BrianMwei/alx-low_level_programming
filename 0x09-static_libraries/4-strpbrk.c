#include "main.h"
/**
 * _strpbrk - search a string for any set of  bytes
 * @s: first appearance in the string
 * @accept: string
 * Return: accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	int content;


	while (*s)
	{
		for (content = 0; accept[content]; content++)
		{
			if (*s == accept[content])
				return (s);
		}
		s++;
	}
	return ('\0');
}
