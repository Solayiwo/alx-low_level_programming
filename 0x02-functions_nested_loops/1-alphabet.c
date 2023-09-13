#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints lowercase alphabet using _putchar
 * and void print_alphabet(void) prototype
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
