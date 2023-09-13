#include "main.h"

/**
 * int _abs - Entry point
 *
 * Description: function that computes the absolute value of an integer
 * using int _abs(int) prototype
 *@n: parameter to be checked
 *
 * Return: Absolute value of n
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
