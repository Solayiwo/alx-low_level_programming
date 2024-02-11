#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - Entry point
 * Description: function that concatenates all the arguments of your program
 * @ac: first parameter integer
 * @av: second parameter pointer to a pointer
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, c = 0;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			size++;
	str = malloc(sizeof(char) * (size + 1));

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[c++] = av[a][b];
		str[c++] = '\n';
	}
	str[size] = '\0';
	if (str != NULL)
		return (str);
	else
		return (NULL);
}
