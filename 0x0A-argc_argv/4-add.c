#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check -  strng that are digit
 * @str: array str
 * Return: 0 (success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str))/*count string*/
	{
		if (!isdigit(str[count]))/*check if the string is digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: coutn the arguments
 * @argv: arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI convert*/
			sum += str_to_int;
		}
		/*condtions that doesn't contain digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);/*print sum*/
	return (0);
}
