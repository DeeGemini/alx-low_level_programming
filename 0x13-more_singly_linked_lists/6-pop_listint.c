#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head node.
 *
 * Return: The data of the head node, or if the list is empty, 0.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
