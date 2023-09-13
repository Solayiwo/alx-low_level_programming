#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: function that prints the last digit of a number
 * using int print_last_digit(int) prototype
 * @n: parameter to be checked
 *
 * Return: Last digit value m
*/

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
		m *= -1;
	_putchar(m + '0');
	return (m);
}
