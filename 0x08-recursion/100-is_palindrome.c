#include "main.h"
int palindrome_scanner(char *s, int freq, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - tells us if a string is a palindrome
 * @s: string in question
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome_scanner(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - gives us the length of the string
 * @s: string in question
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_scanner - checks the characters recursively for palindrome
 * @s: string in question
 * @freq: checks its frequency
 * @length: length of the string
 * Return: 1 if palindrome, else 0
 */
int palindrome_scanner(char *s, int freq, int length)
{
	if (*(s + freq) != *(s + length - 1))
		return (0);
	if (freq >= length)
		return (1);
	return (palindrome_scanner(s, freq + 1, length - 1));
}
