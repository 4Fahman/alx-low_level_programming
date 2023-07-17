#include <stdio.h>
/**
 * main - entry point
 * description: 'reverse alpahabet'
 * Return: 0 (sucess)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}


