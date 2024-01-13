#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: function that checks for alphabetic character
 * using int _isalpha(int c) prototype
 * @c: parameter to be checked
 *
 * Return: 1 if char is letter, lowercase or uppercase, 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
