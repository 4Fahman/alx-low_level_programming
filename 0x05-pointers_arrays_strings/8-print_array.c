#include "main.h"
/**
 * print_array - a function that prints an element
 * @a: array name
 * @n: number of elements
 * Retrun: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); n++)
	{
		printf("%d' ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf('\n');
}
