#include <stdio.h>
/**
 * main - entry point
 * description: 'triple digit print'
 * Return: 0 (sucess)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 < 99; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar(n1 / 10 + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar(n1 / 10 + '0');
			putchar((n2 % 10) + '0');
			if (n1 == 99 && n2 == 98)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

