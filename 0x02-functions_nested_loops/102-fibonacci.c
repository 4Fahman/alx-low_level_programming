#include <stdio.h>
/**
 * main - printt the first fifty fibonacc numbers,
 * starting one and two
 * Return: 0 (sucess)
 */
int main(void)
{
	long int i, j, k, t;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		t = j + k;
		j = k;
		k = t;
	}
	return (0);
}
