#include "main.h"

/**
 * _sqrt_checker - Entry point
 * Description: checks the input number from n to the base
 * @n: parameter to check and compared against base
 * @base: parameter to check
 * Return: nataural square root of base
 */

int _sqrt_checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (_sqrt_checker(n + 1, base));
}

/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_checker(1, n));
}
