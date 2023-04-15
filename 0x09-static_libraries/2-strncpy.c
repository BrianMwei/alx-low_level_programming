#include "main.h"
/**
 * _strncpy - function to copy a string
 * @dest: contents to be copied here
 * @src: string to be copied
 * @n: number of characters to be copied from source.
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
		*(dest + a) = '\0';
	}
	return (dest);
}
