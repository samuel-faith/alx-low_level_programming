#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: pointer to the first node of the list
* @idx:  index of the list where the new node should be added.
* @n:data to be stored in the new node

* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *ptr, *new_node_to_add;

	unsigned int s;

	new_node_to_add = malloc(sizeof(listint_t));

	if (new_node_to_add == NULL)
		return (NULL);

	new_node_to_add->n = n;

	if (idx == 0 || *head == NULL)
	{
		new_node_to_add->next = *head;
		*head = new_node_to_add;
		return (new_node_to_add);
	}


	ptr = *head;

	s = 0;

	while (s < idx-1 && ptr->next != NULL)
	{
		ptr = ptr->next;
		s++;
	}

	if (s < idx-1)
		return (NULL);

	new_node_to_add->next = ptr->next;

	ptr->next = new_node_to_add;

	return (new_node_to_add);
}
