#include "main.h"
/**
 * main - entry point
 * description: 'print_alphabt'
 * Return: 0 (sucess) 
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
