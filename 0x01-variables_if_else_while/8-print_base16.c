#include <stdio.h>
/**
 * main - entry point
 * description: 'hexadecimal'
 * Return: 0 (sucess)
 */
int main(void)
{
	int n;
	int z;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (z = 97; z < 103; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
