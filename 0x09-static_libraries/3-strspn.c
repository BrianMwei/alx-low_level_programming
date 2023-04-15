#include "main.h"
/**
 * _strspn - function to display the length of a
 * prefix substring
 * @s: the string segment
 * @accept: the string
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int content;


	while (*s)
	{
	for (content = 0; accept[content]; content++)
	{
		if (*s == accept[content])
		{
		length++;
		break;
		}
		else if (accept[content + 1] == '\0')
			return (length);
	}
	s++;
}
return (length);
}
