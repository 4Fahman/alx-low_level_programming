#include <stdio.h>
/**
 * main - print the even value terms
 * Return: 0 (sucess)
 */
int main(void)
{
	unsigned long int j, k, t, s;
	int i;

	j = 1;
	k = 2;
	s = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			s = s + j;
		}
		t = j + k;
		j = k;
		j = k;
		k = t;
	}
	printf("%lu\n", s);
	return (0);
}
