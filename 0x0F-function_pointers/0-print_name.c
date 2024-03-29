#include "function_pointers.h"

/**
 * print_name - Entry point
 * Description: function that prints a name
 * @name: input name.
 * @f: function pointer
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
