#include "lists.h"

/**
* free_listint - frees a listint_t list.
*@head: pointer to the first node
*Return: nothing
*/

void free_listint(listint_t *head)

{
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
	}
}
