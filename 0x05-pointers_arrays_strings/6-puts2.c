#include "main.h"
/**
 * puts2 - prints out ll characters of string
 * @str: string character on test
 * return: 0
 */
void puts2(char *str)
{
	int content;

	for (content = 0; str[content] != '\0'; content++)
		if (content % 2 == 0)
			_putchar(str[content]);
	_putchar('\n');
}
