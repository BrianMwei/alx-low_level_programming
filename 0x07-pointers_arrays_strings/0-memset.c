#include "main.h"
/**
 * _memset - input bytes to s
 * @s: initial address to be filled
 * @b: content
 * @n: number of bytes to be filled in s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int value;

	for (value = 0; n > 0; value++)
	{
		s[value] = b;
		n--;
	}
	return (s);
}
