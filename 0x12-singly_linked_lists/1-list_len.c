#include "lists.h"

/**
 * list_len - This function returns the length of a singly linked list
 * @h: The head of the list
 *
 * Return: The length of the list
 */

size_t list_len(const list_t *h)
{
	/* Declare and initialize a variable to hold the count of nodes */
	size_t n = 0;

	/* Traverse the list while the current node is not null */
	while (h != NULL)
	{
		/* Move to the next node */
		h = h->next;

		/* Increment the node count */
		n++;
	}

	/* Return the number of nodes in the list */
	return (n);
}
