#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @index: Index of the desired node (starting from 0).
 * @head: Pointer to the head node.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (position == index)
			return (current);

		current = current->next;
		position++;
	}

	return (NULL);
}
