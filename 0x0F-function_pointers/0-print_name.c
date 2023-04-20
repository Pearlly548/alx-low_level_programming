#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this prints a name
 * @name: pointer to the name string
 * @f: function to the pointer that prints a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

