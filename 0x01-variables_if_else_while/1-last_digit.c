#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigning the last number a value
 *
 * Return: 0
 */
int main(void)
{
int n;
int lastnumber;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastnumber = n % 10;
printf("Last digit of %i is %i ", n, lastnumber);
if (lastnumber > 5)
printf("and is greater than 5\n");
else if (lastnumber == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");
return (0);
}
