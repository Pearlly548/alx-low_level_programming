#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a list
 * @head: pointer to the first node of the list
 *
 * Return: returns the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;

	listint_t *temp
		
	if (*head == NULL)
		return (0);

	mktemp = *head;

	n = temp->n;

	*head = (*head)->next;
	free(temp);

	return (n);
}
