#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
*
* @head: pointer to the first node
*
* Return: a pointer to the first node of thr reversed list
*/

listint_t *reverse_listint(listint_t **head)

{
	listint_t *back = NULL;

	listint_t *fwd = NULL;

	while (*head != NULL)
	{
		fwd = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = fwd;
	}
	*head = back;

	return (*head);
}
