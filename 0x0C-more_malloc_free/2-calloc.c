#include "main.h"
#include <stdlib.h>

/**
 * _calloc - program organizes memory for an array
 * @nmemb: the number of elements to be organized
 * @size: this is the size of the elements
 *
 * Return: returns a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
