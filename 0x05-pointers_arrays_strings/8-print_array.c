#include <stdio.h>
#include "main.h"
/**
 * print_array - display number of elements in an array
 * @a: Testcase string character
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
		if (num != n - 1)
			printf("%d, ", a[num]);
		else
			printf("%d", a[num]);
	printf("\n");
}
