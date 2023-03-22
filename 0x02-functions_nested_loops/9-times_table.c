#include "main.h"
/**
* times_table - printing multiplication table 9
*/
void times_table(void)
{
int num, times, product;

for (num = 0; num <= 9; num++)
{
_putchar('0');

for (times = 1; times <= 9; times++)
{
_putchar(',');
_putchar(' ');

product = num * times;

if (product <= 9)
_putchar(' ');
else
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}

