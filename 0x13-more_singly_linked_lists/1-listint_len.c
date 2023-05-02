#include "lists.h"
#include <stdio.h>

/**
 * listint_len - this program returns the number of elements in a linked list
 * @h: the linked list
 *
 * Return: the number of elements of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return n;
}
