#include "main.h"
/**
* print_last_digit - Output the last number
* @n: Test case number
* Return: The last number
*/
int print_last_digit(int n)
{

int num = n % 10;

if (num < 0)
num *= -1;
_putchar(num + '0');
return (num);
}
