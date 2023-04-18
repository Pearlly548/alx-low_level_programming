#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this program activates a variable of type struct dog
 * @d: parameter of type struct dog
 * @name: pointer to string containing name
 * @age: the age of the dog
 * @owner: pointer to string containing owner info
 *
 * Return: returns (0)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
