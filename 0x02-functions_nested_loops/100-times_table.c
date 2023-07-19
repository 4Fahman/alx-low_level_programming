#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: number of times table
 */
void print_times_table(int n)
{
	int m, h, p;

	if (n >= 0 && n <= 15)
	{
		for (h = 0; h <= n; h++)
		{
			for (m = 0; m <= n; m++)
			{
				p = m * h;
				if (m == 0)
				{
					_putchar(p + 48);
				}
				else if (p < 10 && m != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + 48);
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + 48);
					_putchar((p % 10) + 48);
				}
				else if (p >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 100) + 48);
				_putchar(((p / 10) % 10) + 48);
				_putchar((p % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
