#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - this program Prints a struct dog.
 * @d: The struct dog to be printed.
 * Returns: always (0)
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d == NULL)
		{
			return;
		}
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
