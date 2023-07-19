#include <stdio.h>
/**
 * main - multiple of 3 and 5 under 1024
 * Return: 0 (sucess)
 */
int main(void)
{
	unsigned long int mul3, mul5, mul;
	int i;

	mul3 = 0;
	mul5 = 0;
	mul = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			mul3 = mul3 + i;
		}
		else if ((i % 5) == 0)
		{
			mul5 = mul5 + i;
		}
	}
	mul = mul3 + mul5;
	printf("%lu\n", mul);
	return (0);
}
