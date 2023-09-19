#include "main.h"

/**
 * swap_int - Entry point
 * Description: Swap the value of two integers
 * @a: Type int pointer
 * @b: Type int pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = c;
	*a = *b;
	*b = c;
}
