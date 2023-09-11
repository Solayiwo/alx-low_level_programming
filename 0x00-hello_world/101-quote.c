#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: returning 1 this time (Error)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
