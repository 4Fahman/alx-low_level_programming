#include "main.h"
/**
 * swap_int - swaps the vlue of the two int
 * @a: input integer
 * @b: input integer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
