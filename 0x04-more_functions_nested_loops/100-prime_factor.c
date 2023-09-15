#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Function that finds and prints the largest
 * prime factor of the number 612852475143
 *
 * Return: Always 0
*/

int main(void)
{
	long int i = 612852475143;
	long int factors;

	for (factors = 2; factors < i; factors++)
	{
		if (i % factors == 0)
		{
			i /= factors;
		}
	}

	printf("%ld\n", factors);
	return (0);
}
