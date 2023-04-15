
 

#include "main.h"
/**
 * _memcpy - function to copy from src to dest
 * @src: the file memory being copied from
 * @dest: the file memory being copied too
 * @n: the bytes being copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int message;



	message = 0;

	while (message < n)
	{
		dest[message] = src[message];
		message++;
	}
	return (dest);
}
