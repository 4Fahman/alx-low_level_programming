#include <stdio.h>
/**
 * main - entry point
 * description: 'not e and q'
 * Return: 0 (sucess)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
