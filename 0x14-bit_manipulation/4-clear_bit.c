#include "main.h"

/**
 * clear_bit - Entry point
 * Description: Function that sets the value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: given index
 * Return: value of the bit at index index or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
