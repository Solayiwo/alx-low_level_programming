#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints lowercase alphabet 10 times using _putchar
 * and void print_alphabet_x10(void) prototype
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
