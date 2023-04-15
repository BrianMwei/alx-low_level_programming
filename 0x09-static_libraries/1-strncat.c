#include "main.h"
/**
 * _strncat - concatenate 2 strings upto n bytes
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to not exceed
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
