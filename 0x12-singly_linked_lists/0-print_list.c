#include "lists.h"
#include <stdio.h>

/**
 * print_list - This function prints the content of a singly linked list
 * @h: The pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	/* declare and initialize a variable to hold the count of nodes */
	size_t n = 0;

	/* traverse the list while the current node is not null */
	while (h != NULL)
	{
		/* check if the current node's string is null */
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/* move to the next node */
		h = h->next;

		/* increment the node count */
		n++;
	}

	/* return the number of nodes in the list */
	return (n);
}
