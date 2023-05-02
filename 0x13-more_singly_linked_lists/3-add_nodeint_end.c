#include "lists.h"


/**
 * add_nodeint_end - this function adds a new node end of a listint_t list.
 * @head: the first node in the list
 *	head of the listint_t list.
 * @n: the amount of elements in the list
 * return: if the function fails - NULL
 *	Otherwise - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		last = *head;
		while (last->next != NULL)
		last = last->next;
		last->next = new;
	}
	else
	{
		*head = new;
	}

	return (*head);
}
