#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: 1 (sucess)
 * On error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
