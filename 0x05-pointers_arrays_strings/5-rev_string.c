#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: test char
 * Return: 0 
 */
void rev_string(char *s)
{
	int counter = 0, str_1, str_2;
	char c;

	while (s[counter] != '\0')
	{
	counter++;
	}
	str_2 = counter - 1;
	for (str_1 = 0; str_2 >= 0 && str_1 < str_2; str_2--, str_1++)
	{
		c = s[str_1];
		s[str_1] = s[str_2];
		s[str_2] = c;
	}
}
