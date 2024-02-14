#include "main.h"

/**
 * flip_bits - Entry point
 * Description: Function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: First number
 * @m: Second number to flip n to
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned long int bits = 0;

	while (num > 0)
	{
		bits += (num & 1);
		num >>= 1;
	}
	return (bits);
}
