#include "lists.h"
#include <string.h>

/**
 * add_node - This program adds a new node
 * @head: A double pointer
 * @str: The string to be stored in the new node
 *
 * Return: The address of the new element if successful, otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Declare a new list_t element */
	list_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the str member of the new node */
	new_node->str = strdup(str);

	/* Set the len member of the new node */
	new_node->len = strlen(str);

	/* Set the next member of the new node */
	new_node->next = *head;

	/* Update the head pointer */
	*head = new_node;

	/* Return the new node */
	return (new_node);
}

