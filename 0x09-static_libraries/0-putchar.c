#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 1 (sucess)
 * On error: -1 is returned, and error is set approppiratly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
