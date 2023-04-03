#include "lists.h"

/**
* free_listint2 - frees a listint_t list.
*@head: pointer to the first node
*Return: nothing
*/

void free_listint2(listint_t **head)

{
	listint_t *next, *temp = *head;

	/*listint_t *next;*/

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

	*head = NULL;
}
