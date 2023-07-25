#include "main.h"
/**
 * puts2 - functon should not print only one
 * @str: entry point
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	int o;

	while (*str != '\0')
	{
		*str++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
