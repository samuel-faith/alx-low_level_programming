#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
*@head: pointer to the first node
*@n: n value of the new node
*Return: The address of the new element or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *last_node = malloc(sizeof(listint_t));

	if (last_node == NULL)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;


	if (*head == NULL)
		*head = last_node;

	else
	{
		listint_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

	ptr->next = last_node;
	}

	return (last_node);
}
