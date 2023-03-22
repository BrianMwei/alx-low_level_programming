#include "main.h"
/**
* print_sign - we print the sign of a number
* @n: is the test number
* Return: 1 if its positive, 0 if its zero, and 0 if negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
