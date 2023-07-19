#include <stdio.h>
/**
 * main - entry point
 * description: 98 fibonacci numbers
 * Return: 0 (sucess)
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, t = 0;

	while (i < 98)
	{
		t = a + b;
		a = b;
		b = t;
		printf("%lu", t);
		if (i < 97)
			printf(",");
		i++;
	}
putchar("\n");
return (0);
}
