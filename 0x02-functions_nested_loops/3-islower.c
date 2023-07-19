#include "main.h"
/**
 * _islower - returns 1 if the input is a lower case character,
 * the other one returns 0
 *
 * @c: the character in ASCII code
 * Return: 1 for lowercase, 0 for the other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
