#include "main.h"

/**
 * set_string - Entry point
 * Description: Function that sets the value of a pointer to a char
 * @s: source adress
 * @to: destination adress
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
