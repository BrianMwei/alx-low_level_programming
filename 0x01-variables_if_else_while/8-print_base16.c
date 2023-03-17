#include <stdio.h>
/**
 * main - base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
int num;
char hexa;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (hexa = 'a'; hexa <= 'f'; hexa++)
putchar(hexa);
putchar('\n');
return (0);
}
