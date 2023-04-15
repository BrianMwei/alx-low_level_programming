#include "main.h"
/**
 * _isalpha - test if char is a letter
 * @c: is the test char
 * Return: 1 if char c is a letter, else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
