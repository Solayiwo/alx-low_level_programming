#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * Description: function that executes a function given
 * as a parameter on each element of an array
 * @array: input integer array.
 * @size: size of the array to print
 * @action: pointer to the function to print
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
