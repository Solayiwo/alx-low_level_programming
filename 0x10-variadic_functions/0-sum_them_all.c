#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * description: Function that returns the sum of all its parameters
 * @n: amount of the arguments
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg_list;

	if (n == 0)
		return (0);

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg_list, const unsigned int);

	va_end(arg_list);

	return (sum);
}
