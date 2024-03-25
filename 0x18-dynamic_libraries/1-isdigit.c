#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: Function that checks for a digit (0 through 9)
 * using int _isdigit(int c) prototype.
 * @c: Parameter to be checked
 *
 * Return: 1 if c is a digit 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
