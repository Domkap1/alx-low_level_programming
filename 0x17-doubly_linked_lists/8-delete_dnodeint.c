#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);

	i = 0;
	current = *head;

	/* Handle deletion at the beginning (index == 0) */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse the list to find the node at the specified index */
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	/* Check if the specified index is out of bounds */
	if (current == NULL)
		return (-1);

	/* Adjust the pointers to skip the current node */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

