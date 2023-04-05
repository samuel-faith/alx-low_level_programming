#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at
* index of a listint_t linked list.
* @head: pointer to a pointer to the head node of the linked list
* @index: index of the node that should be deleted, starting from 0
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *temp, *ptr = NULL;
	unsigned int i;

	if (head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	if (index == 1)
	{
		ptr->next = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		ptr = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	ptr->next = temp->next;
	free(temp);

	return (1);
}
