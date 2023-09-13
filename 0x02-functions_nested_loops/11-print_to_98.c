#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - Entry point
 *
 * Description: function that prints all natural numbers from
 * n to 98 using void print_to_98(int n) prototype
 *
 * @n: parameter to be checked
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", n);
}
