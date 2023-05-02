#include "lists.h"

/**
 * free_listint - frees memory held by the list
 * @head: the first node in the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
