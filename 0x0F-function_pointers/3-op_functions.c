#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns the sum of two
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of the two
 * @a: First number
 * @b: Second number
 * Return: The diference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return the division of two numbers
 * @a: The first number
 * @b: The secomd number
 * Return: The quotuient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the reminder
 * @a: The first number
 * @b: The secomd number
 * Return: The reminder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}

