#include "main.h"

/**
 * binary_to_uint - Entry point
 * Description: Function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1;
	unsigned int sum = 0;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (len = len - 1; len >= 0; len--)
	{

		if (b[len] != '0' && b[len] != '1')
			return (0);

		sum += (b[len] - '0') * i;
		i *= 2;
	}
	return (sum);
}
