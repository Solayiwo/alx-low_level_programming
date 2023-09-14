#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: Function that checks for uppercase character
 * using int _isupper(int c) prototype.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
*/

int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
