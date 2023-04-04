#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list, and returns
*               the head node's data (n).
*
* @head: Pointer to the head of the linked list.
*
* Return: The data (n) of the head node, or 0 if the linked list is empty.
*/

int pop_listint(listint_t **head)

{
	int data = 0;

	if (head && *head != NULL)

	{
		listint_t *temp;

		temp = *head;
		data = temp->n;
		*head = (*head)->next;

		free(temp);
	}

	return (data);
}
