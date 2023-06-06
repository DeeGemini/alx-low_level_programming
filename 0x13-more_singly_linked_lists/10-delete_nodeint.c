#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to a pointer to the head node.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if deletion is successful, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int position = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	previous = NULL;

	while (current != NULL && position < index)
	{
		previous = current;
		current = current->next;
		position++;
	}

	if (current == NULL)
		return (-1);

	if (previous == NULL)
		*head = current->next;

	else
		previous->next = current->next;

	free(current);
	return (1);
}
