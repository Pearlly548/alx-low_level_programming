#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - input allocates memory using malloc
 * @b: parameter that checks the size of assigned memory
 *
 * Return: returns pointer to memory allocated or 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
