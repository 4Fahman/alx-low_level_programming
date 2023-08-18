#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on anew
 * @array: array
 * @size: how many elemnts to print
 * @action: pointer to print in regular or hex
 * Return: vid
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
