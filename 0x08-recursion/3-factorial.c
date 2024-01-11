#include "main.h"

/**
 * factorial - Entry point
 * Description: function that returns the factorial of a given number
 * @n: parameter to be checked
 * Return: factorial of the number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
