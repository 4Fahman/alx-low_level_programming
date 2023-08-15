#include <stdio.h>
#include "main.h"
/**
 * main - print the number of argumnts passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;/*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}