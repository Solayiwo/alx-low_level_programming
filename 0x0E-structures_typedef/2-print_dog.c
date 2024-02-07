#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * Description: Function that prints a struct dog.
 * @d: pointer to struct type dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
