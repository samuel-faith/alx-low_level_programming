#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at
* index of a listint_t linked list.
* @head: pointer to a pointer to the head node of the linked list
* @index: index of the node that should be deleted, starting from 0
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)

{

	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL) /* Check if the list is empty */
	return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL) /* If the index is out of range */
		return (-1);

	previous->next = current->next;
	free(current); /* Free the memory for the deleted node */

	return (1);
}
