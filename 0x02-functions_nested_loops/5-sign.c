#include "main.h"
/**
 * print_sign - determines if the input is
 * positve, negative or zero
 *
 * @n: input is an integer
 *
 * Return: 1 is positive, 0 is zero, -1 is negatve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
