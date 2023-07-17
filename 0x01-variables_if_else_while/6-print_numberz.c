#include <stdio.h>
/**
 * main - entry point
 * description: 'limited use of function'
 * Return: 0 (sucess)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
