#include "main.h"

/**
 * set_bit - Entry point
 * Description: Function that sets the value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: index of the bit
 * Return: 1 if successful, else -1 upon faliure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
