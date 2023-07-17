#include <stdio.h>
/**
 * main - entry point
 * description: 'lower and upper case'
 * Return: 0 (sucess)
 */
int main(void)
{
	int n = 97;
	int o = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (o <= 90)
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
