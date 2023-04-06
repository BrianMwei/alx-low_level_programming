#include "main.h"
/**
 * string_scanner - scans if two strings are identical
 * @s1: address for string 1
 * @s2: address for string 2
 * @content1: info
 * @content2: info
 * Return: 1 if strings are similar, else 0
 */
int string_scanner(char *s1, char *s2, int content1, int content2)
{
	if (s1[content1] == '\0' && s2[content2] == '\0')
		return (1);
	if (s1[content1] == s2[content2])
		return (string_scanner(s1, s2, content1 + 1, content2 + 1));
	if (s1[content1] == '\0' && s2[content2] == '*')
		return (string_scanner(s1, s2, content1, content2 + 1));
	if (s2[content2] == '*')
		return (string_scanner(s1, s2, content1 + 1, content2) || string_scanner(s1, s2, content1, content2 + 1));
	return (0);
}
/**
 * wildcmp - scans if two strings are identical
 * @s1: address for string 1
 * @s2: address for string 2
 * Return: 1 if the two are the same, else 0
 */
int wildcmp(char *s1, char *s2)
{
	return (string_scanner(s1, s2, 0, 0));
}
