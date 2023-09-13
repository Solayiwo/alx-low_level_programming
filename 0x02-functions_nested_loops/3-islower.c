#include "main.h"

/**
 * int _islower(int c) - Entry point
 *
 * Description: function that checks for lowercase character
 * using int _islower(int c) prototype
 * @c: parameter to be checked
 *
 * Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
