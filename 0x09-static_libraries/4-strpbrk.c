#include "main.h"
/**
 * _strpbrk - entry point
 * @s: entry point
 * @accept: entry point
 * Return: 0 (sucess)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
