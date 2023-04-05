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
	listint_t *temp, *ptr;

	unsigned int i;

	if (head == NULL)
		return (-1);

	while (temp = *head, temp != NULL)
	{
		for (i = 0; i < index; i++)
		{
			ptr = temp;
			temp = temp->next;
		}
	}

	if (i != index)
		return (-1);

	if (ptr == NULL)
		*head = temp->next;
	else
		ptr->next = temp->next;

	free(temp);
	return (1);
}
