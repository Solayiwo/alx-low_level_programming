#include "variadic_functions.h"

/**
 * print_strings - Entry point
 * description: Function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	char *str;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg_list);
}
