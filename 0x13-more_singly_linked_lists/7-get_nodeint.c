#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: pointer to the first node.
* @index: no of nodes to access
* Return: node at nth index or NULL if node is empty
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int p;

	listint_t *temp = head;

	p = 0;

	while (temp != NULL)
	{
		if (p == index)
		{
			return (temp);
		}
		p++;
		temp = temp->next;
	}

	return (NULL);
}
