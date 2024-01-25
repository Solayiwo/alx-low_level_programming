#include "function_pointers.h"

/**
 * int_index - Entry point
 * Description: function that searches for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to the function for comparing values
 * Return: return index if comparison = true, else -1 If size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
